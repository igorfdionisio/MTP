#include <stdio.h>

int main()
{
    int vet[10];
    int soma=0, produto=1, i;
    for (i=0; i<10; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);
    }
    for (i=0; i<10; i++)
        soma=soma+vet[i];
    for(i=0; i<10; i++)
        produto=produto*vet[i];
    printf("\nA soma e: %d", soma);
    printf("\nO produto e: %d", produto);
    return 0;
}
