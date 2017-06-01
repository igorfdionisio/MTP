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
int mdc (int a, int b){
    if (a==b){
        return a;
    }
    else if (a==0){
        return b;
    }
    else if (a%2==0 && b%2!=0){
        return mdc (a/2, b);
    }
    else if (a%2!=0 && b%2==0){
        return mdc (a, b/2);
    }
    else if (a%2==0 && b%2==0){
        return (2*mdc (a/2, b/2));
    }
    else if (a>b){
        return (mdc (((a-b)/2), b));
    }
    else
        return (mdc (((b-a)/2), a));
}
int main(){
    struct Numero resposta;
    int a, b, c, d, n, m, m1;
    printf("Digite o numerador e depois o denominador do 1: ");
    scanf("%d %d", &a, &b);
    printf("\nDigite o numerador e o denominador do 2: ");
    scanf("%d %d", &c, &d);
    resposta=somar(a,b,c,d);
    n=resposta.n;
    m=resposta.d;
    m1=mdc(n,m);
    printf("\nA soma e: %d/%d", resposta.n/m1, resposta.d/m1);
    return EXIT_SUCCESS;
}
