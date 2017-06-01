#include <stdio.h>
int soma(int A[], int N, int i){
    int r=0;
    if(i<N){
        r=A[i]+soma(A, N, i+1);
    }
    return r;
}
int main(){
    int A[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29};
    int N = sizeof(A)/sizeof(int);
    int i=0, resultado;
    resultado=soma(A, N, i);
    printf("A soma e: %d\n\n", resultado);
    return 0;
}
