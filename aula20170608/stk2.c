#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 5
float media(float V[N]){
    int i;
    float m=0;
    for(i=0; i<N; i++)
        m=m+V[i];
    m=m/5;
    printf("\nA media dos numero e: %g", m);
    return m;
}
void desv(float V[N], float m){
    int i;
    float s=0;
    for (i=0; i<N; i++){
        s=s+(pow((V[i]-m),2));
    }
    s=sqrt(s/(N-1));
    printf("\nO Desvio padrao e: %g\n", s);
}
int main()
{
    float vet[N], med;
    int i;
    for (i=0; i<N; i++){
        printf("%d- Digite um numero: ", i+1);
        scanf("%f", &vet[i]);
    }
    med=media(vet);
    desv(vet, med);
    return 0;
}
