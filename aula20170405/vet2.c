#include <stdio.h>

int main()
{
    int vet[10];
    int i, k, aux;
    for (i=0; i<10; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);
    }
    for (k=0, i=9 ;k<5 ; i--){
        aux=vet[i];
        vet[i]=vet[k];
        vet[k]=aux;
        k++;
    }
    for(i=0; i<10; i++)
        printf("%d\n", vet[i]);
    return 0;
}
