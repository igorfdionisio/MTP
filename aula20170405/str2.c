#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#include <ctype.h>
#define NCHAR 256
int main()
{
    char frase[NCHAR], codigo[NCHAR]=" ";
    int i=0, j=0;
    printf("Digite uma frase: \n");
    fgets(frase, NCHAR, stdin);
    if (frase[0]!=' ')
    {
        codigo[j]=frase[i];
        j++;
    }
    for (i=0; frase[i]!='\0'; i++)
    {
        if (frase[i]==' ' && frase[i+1]!=' ')
        {
            codigo[j]=frase[i+1];
            j++;
        }
    }
    codigo[j]='\0';
    for (i=0; i<NCHAR; i++)
        codigo[i] = toupper(codigo[i]);
    printf("\nO codigo e:%s", codigo);
    return 0;
}
