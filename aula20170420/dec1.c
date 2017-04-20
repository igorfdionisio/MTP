#include <stdio.h>

void safeFlush() {
    char c;
    while((c = getchar()) != EOF && c != '\n');
}
int main(){
    int numero;
    printf("Entre com um numero: ");
    scanf("%d", &numero);
    if (numero%2==0)
        printf("Par\n");
    else
        printf("Impar\n");
    if (numero%3==0)
        printf("Multiplo de 3\n");
    if (numero%5==0)
        printf("Multiplo de 5\n");
    if (numero%7==0)
        printf("multiplo de 7\n");
    return 0;
}
