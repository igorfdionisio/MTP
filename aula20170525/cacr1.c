#include <stdio.h>
#include <stdlib.h>
int primo(int n){
    int i, p=1;
    for (i=2; i<n; i++){
        if (n%i==0){
            p=0;
            break;
        }
    }
    if (n<2)
        p=0;
    return p;
}
int main(){
    int i, n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    for (i=2; i<n; i++){
        if (primo(i)&& primo(n-i))
            printf("\n%d = %d + %d\n", n, i, n-i);
    }
    return 0;
}
