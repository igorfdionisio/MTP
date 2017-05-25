#include <stdio.h>
#include <stdlib.h>
#include<math.h>
float delta(float a,float b,float c){
    float d;
    d=(b*b)-4*a*c;
    return d;
}
float raiz(float a,float b,float d){
    float x1=(-b+sqrt(d))/(2*a);
    return x1;
}
float raiz2(float a,float b,float d){
    float x2=(-b-sqrt(d))/(2*a);
    return x2;
}
int main(){
    float a, b, c, d, x1, x2;
    printf("Digite o valor de 'a', 'b' e 'c' da funcao: ");
    scanf("%f %f %f", &a, &b, &c);
    d=delta(a,b,c);
    printf("%f", d);
    if(d<0)
        printf("Nao possui raiz real!");
    else{
        printf("\nRaiz 1: ");
        x1=raiz(a,b,d);
        printf("%f", x1);
        printf("\nRaiz 2: ");
        x2=raiz2(a,b,d);
        printf("%f", x2);
    }
    return 0;
}
