#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, cont=0;
    int vetor[]= {0xFF, 0xFFFF, 0xFFFFFF, 0xFFFFFFFF};
    unsigned char *p;
    p =(unsigned char *) &vetor;
    for (i=0; i<sizeof(vetor); i++)
    {
        if (p[i]==0xFF)
            cont++;
        printf("Em: %p | contem: %X\n", p+i, p[i]);
    }
    printf("\n\nEnderecos com somente 1: %d\n\n", cont);
    return 0;
}
