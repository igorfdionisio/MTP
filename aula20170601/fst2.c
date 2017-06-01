#include <stdio.h>
#include <stdlib.h>

struct Numero{
    int n;
    int d;
};
struct Numero somar(int a, int b, int c, int d){
    struct Numero s;
    s.n=d*a + b*c;
    s.d=b*d;
    return s;
}
int main(){
    struct Numero resposta;
    int a, b, c, d;
    printf("Digite o numerador e depois o denominador do 1: ");
    scanf("%d %d", &a, &b);
    printf("\nDigite o numerador e o denominador do 2: ");
    scanf("%d %d", &c, &d);
    resposta=somar(a,b,c,d);
    printf("\nA soma e: %d/%d", resposta.n, resposta.d);
    return EXIT_SUCCESS;
}
