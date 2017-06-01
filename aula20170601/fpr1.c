#include <stdio.h>
#include <stdlib.h>
struct Divisao { int quociente, resto;};
void dividir(int a ,int b, struct Divisao *presposta){
    presposta->quociente=a/b;
    presposta->resto=a%b;
}
int main(){
    struct Divisao resposta;
    int dividendo, divisor;
    printf("Entre com o dividendo: ");
    scanf("%d", &dividendo);
    printf("Entre com o divisor: ");
    scanf("%d", &divisor);
    dividir(dividendo, divisor, &resposta);
    printf("resposta: %d com resto %d\n", resposta.quociente, resposta.resto);
    return EXIT_SUCCESS;
}
