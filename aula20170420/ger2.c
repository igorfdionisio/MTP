#include <stdio.h>

int main()
{
    int i=1, numero, cont=0;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    for ( i=1; i<numero; i++)
    {
        if (numero%i==0)
            cont= cont +i;
    }
    if (cont==numero)
        printf("\nO numero e perfeito!");
    else
        printf("\nO numero nao e perfeito");
    return 0;
}
