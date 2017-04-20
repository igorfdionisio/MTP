#include <stdio.h>
#include <time.h>

void safeFlush() {
    char c;
    while((c = getchar()) != EOF && c != '\n');
}
int main(){
    srand(time(0));
    int numero;
    int aleatorio;
    int resultado;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    safeFlush();
    aleatorio=rand()%10;
    resultado= numero+aleatorio;
    printf("\nO numero aleatorio e %d",aleatorio);
    printf("\nO numero digitado e %d", numero);
    printf("\nA soma e: %d", resultado);
    if (resultado%2==0)
        printf("\nA soma e um numero Par!\n");
    else
        printf("\nA soma e um numero Impar!\n");
    return 0;
}
