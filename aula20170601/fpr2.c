#include <stdio.h>
#include <stdlib.h>
void compara(int *A[], int *B[], int m, int n){
    int i, k;
    for (i=0; i<n; i++)
         for(k=0; k<m; k++)
             if(A[i]==B[k])
                printf("%d ", B[k]);
}
int main(){
    int A[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29};
    int n = sizeof(A)/sizeof(int);
    int B[] = {1, 2, 3, 4, 5, 6, 8, 10, 12, 7, 29};
    int m = sizeof(B)/sizeof(int);
    compara(&A, &B, m, n);
    return EXIT_SUCCESS;
}
