#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#include <ctype.h>
#define NCHAR 256
int main()
{
    char frase[NCHAR];
    int i;
    printf("Digite uma frase: \n");
    fgets(frase, NCHAR, stdin);
    frase[strlen(frase)-1]='\0'; //tirar o enter
    for (i=0; i<NCHAR; i++)
        frase[i] = toupper(frase[i]);
    for (i=0; frase[i]!='\0'; i++)
    {
        if (frase[i]=='A')
            frase[i]='4';
        if (frase[i]=='E')
            frase[i]='3';
        if(frase[i]=='I')
            frase[i]='1';
        if(frase[i]=='O')
            frase[i]='0';
        if (frase[i]=='S')
            frase[i]='5';
        if (frase[i]=='G')
            frase[i]='6';
    }
    printf("A frase fica: \n%s", frase);
    return 0;
}
