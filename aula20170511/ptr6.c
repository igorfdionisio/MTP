#include <stdio.h>
#include <stdlib.h>
int main()
{
    char frase[17]={0};
    int i;
    int *p;
    printf("Digite uma frase: ");
    fgets(frase, 17, stdin);
    p=(unsigned int *)frase;
    printf("\nConteudo em decimal: ");
    for (i=0; i<sizeof(frase)/ sizeof(int);i++)
        printf(" %i", p[i]);
    printf("\nConteudo em hexadecimal: ");
    for (i=0;i<sizeof(frase)/ sizeof(int);i++)
        printf(" %X", p[i]);
    return 0;
}
