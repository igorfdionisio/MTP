#include <stdio.h>

int main(){
    long long numero, i, fatorial;
    printf("Entre com um numero inteiro: ");
    scanf("%llu", &numero);
    fatorial = 1;
    for (i=2; i <= numero; i++)
        fatorial = fatorial*i;
    printf("Fatorial: %llu\n", fatorial);
    return 0;
}
