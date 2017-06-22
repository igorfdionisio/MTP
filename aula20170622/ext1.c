#include <stdio.h>
#include <stdlib.h>
void mostrar(float * numeros, int qtde){
    int i;
    printf("\nNumeros:");
    for (i=0; i<qtde; i++){
        printf(" %f%c", numeros[i], (i==qtde-1)? '\n': ';');
    }
}
float media(float * numeros, int qtde){
    int i;
    float m=0.f;
    for(i=0;i<qtde;i++){
        m+=numeros[i];
    }
    return m/qtde;
}
float maior(float * numeros, int qtde){
    int i;
    float max=numeros[0];
    for (i=0;i<qtde;i++){
        if(numeros[i]>max)
            max=numeros[i];
    }
    return max;
}
float menor(float * numeros, int qtde){
    int i;
    float min=numeros[0];
    for (i=0;i<qtde;i++){
        if(numeros[i]<min)
            min=numeros[i];
    }
    return min;
}
int main(){
    float * numeros = NULL;
    int qtde=0, opc;
    do{
        qtde++;
        numeros=(float *) realloc(numeros, qtde*sizeof(float));
        printf("Entre com um numero: ");
        scanf("%f", numeros+(qtde-1));
        mostrar(numeros, qtde);
        printf("\nMedia: %g\n", media(numeros,qtde));
        printf("\nMaior: %g\n", maior(numeros, qtde));
        printf("\nMenor: %g\n", menor(numeros, qtde));
        printf("\nDeseja continuar? (0-nao; 1-sim) ");
        scanf("%d", &opc); getchar();
    }while(opc);
    free(numeros);
    return 0;
}
