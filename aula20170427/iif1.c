#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    srand(time(0));
    int i, conta =0;
    float n, prob;
    printf("Entre com a prob: ");
    scanf("%f", &prob);
    for (i=0; i<100; i++)
    {
        n=rand()/(float)RAND_MAX;
        if(n<prob)
            conta++;
    }
    printf("SAo %d vezes.", conta);
    return EXIT_SUCCESS;
}
