#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, cont=0;
    int vetor[] = {0, 1, 2, 4, 8};
    char *p;
    p = (char *) &vetor;
    for (i=0; i<sizeof(vetor); i++)
    {
        if (p[i]==0x00)
            cont++;
        printf("Em: %p | contem: %u\n", p+i, p[i]);
    }
    printf("\n\nEnderecos com somente 0: %d\n\n", cont);
    return 0;
}
