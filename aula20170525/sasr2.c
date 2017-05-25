#include <stdio.h>
void par(int x)
{
    int i;
    for (i=1; i<=x; i++)
    {
        if (i%2==0)
            printf("%d ", i);
    }
}
void impar(int x)
{
    int j;
    for (j=1; j<=x; j++)
    {
        if (j%2!=0)
            printf("%d ", j);
    }
}
int main(){
    int x;
    printf("Digite um numero: ");
    scanf("%d", &x);
    par(x);
    printf("\n");
    impar(x);
    return 0;
}
