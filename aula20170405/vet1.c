#include <stdio.h>
#include <time.h>
#define N 10000
int main()
{
    srand(time(0));
    int n, i;
    float media;
    printf("Digite o numero para o calculo da media: ");
    scanf("%d", &n);
    int vet[N];
    for (i=0;i<N;i++)
        vet[i]= rand()% n + 1;
    media=0.0;
    for (i=0; i<N; i++)
        media=media+vet[i];
    media=media/N;
    printf("A media e: %g. \n", media);

    return 0;
}
