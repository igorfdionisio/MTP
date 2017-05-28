#include <stdio.h>
#include <string.h>
union U{
    signed int n;
    float m;
};
int main()
{
    union U un;
    char r[1];
    printf("Deseja um numero do tipo inteiro(digite i) ou flutuante(digite f)?\n");
    fgets(r, 2, stdin);
    if (strcmp(r,"i")==0){
        printf("\nDigite o numero inteiro: ");
        scanf("%d", &un.n);
        printf("\nEsse numero em flutuante seria: ");
        printf("\n%f\n", un.m);
    }
    else{
        printf("\nDigite o numero flutuante: ");
        scanf("%f", &un.m);
        printf("\nEsse numero em inteiro seria:");
        printf("\n%d\n", un.n);
    }
    return 0;
}
