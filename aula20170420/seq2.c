#include <stdio.h>
void safeFlush() {
    char c;
    while((c = getchar()) != EOF && c != '\n');
}
int main(){
    float base;
    float altura;
    float area;
    printf("Digite a base do paralelogramo: ");
    scanf("%f", &base);
    printf("\nDigite a altura do paralelogramo: ");
    scanf("%f", &altura);
    area= base*altura;
    printf("A area do paralelogramo e: %f", area);
    return 0;
}
