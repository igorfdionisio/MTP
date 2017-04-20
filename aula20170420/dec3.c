#include <stdio.h>
#include <time.h>

void safeFlush() {
    char c;
    while((c = getchar()) != EOF && c != '\n');
}
int main(){
    srand(time(0));
    int a, b, c, soma;
    a=(rand()%6)+1;
    printf("\nDado 1: %d", a);
    b=(rand()%6)+1;
    printf("\nDado 2: %d", b);
    c= (rand()%6)+1;
    printf("\nDado 3: %d", c);
    soma = a+b+c;
    printf("\nA soma e: %d", soma);
    if (soma==7 || soma==11 )
        printf("\nVoce ganhou!\n");
    else
        printf("\n Voce perdeu!\n");
    return 0;
}
