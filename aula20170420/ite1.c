#include <stdio.h>

int main(){
    int numero, i, fatorial;
    printf("Entre com um numero inteiro: ");
    scanf("%d", &numero);
    fatorial = 1;
    for (i=2; i <= numero; i++)
        fatorial = fatorial*i;
    printf("Fatorial: %d\n", fatorial);
    return 0;
}
