#include <stdio.h>

int main()
{
    int b, p, i, resultado=1;
    printf("Digite a base e potencia: ");
    scanf("%d %d", &b, &p);
    for (i=0; i<p; i++)
        resultado=b*resultado;
    printf("\nO resultado e: %d",resultado);
    return 0;
}
