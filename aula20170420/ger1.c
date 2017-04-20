#include<stdio.h>

int main()
{
    int numero, i=2, j=0;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    for (i=2; i<numero; i++)
    {
        if (numero%i==0)
            j=1;
    }
    if (j==1)
        printf("\nNao e primo! ");
    else
        printf("\nE primo! ");
    return 0;
}
