#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#include <ctype.h>
#define NCHAR 256
int main()
{
    int i;
    char frase[NCHAR];
    char cifra[NCHAR];
    printf("Entre com uma frase:\n");
    fgets(frase, NCHAR, stdin);
    frase[strlen(frase)-1]='\0';
    for (i=0; i<NCHAR;i++)
    {
        if(isalpha(frase[i]))
        {
            if ((frase[i]>='A' && frase[i]<'N')||(frase[i]>='a' &&frase[i]<'n'))
                cifra[i]=frase[i]+13;
            else
                cifra[i]=frase[i]-13;
        }
        else
            cifra[i]=frase[i];
    }
    printf("Mensagem: \n%s", cifra);
    return 0;
}
