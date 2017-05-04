#include <stdio.h>
#include <time.h>

int main()
{
    srand(time(0));
    int n, i, max=0, min=9;
    printf("Digite o numero de posicoes do vetor: ");
    scanf("%d", &n);
    int vet[n];
    for (i=0; i<n; i++)
        vet[i]=rand()%10;
    for(i=0; i<n; i++)
    {
        if(vet[i]>=max)
            max=vet[i];
    }
    for (i=0; i<n; i++)
    {
        if (vet[i]<=min)
            min=vet[i];
    }
    printf("\nO maximo e: %d", max);
    printf("\nO minimo e: %d", min);
    return 0;
}
