#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, y, soma;
    printf("Digite um numero: ");
    scanf("%f", &x);
    printf("\nDigite outro numero: ");
    scanf("%f", &y);
    printf("\n\nEndereco da variavel x: %p", &x);
    printf("\n\nEndereco da variavel y: %p", &y);
    soma = x+y;
    printf("\n\nA soma dos numero e: %f e seu endereco e: %p\n\n", soma, &soma);
    return 0;
}
