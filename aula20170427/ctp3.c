#include <stdio.h>
#include <ctype.h>
#define NCHAR 256
int main()
{
    int i,j=0;
    char frase[NCHAR];
    printf("Digite uma frase: ");
    fgets(frase, NCHAR,stdin);
    for (i=0; frase[i]; i++)
    {
        if (isalpha(frase[i]))
            j++;
    }
    printf("Quantidade de letras: \n%d", j);
    return 0;
}
