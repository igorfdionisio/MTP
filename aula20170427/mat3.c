#include <stdio.h>
#include <math.h>

int main()
{
    double b, n, logaritmo;
    printf("Digite a base do log: ");
    scanf("%lf", &b);
    printf("Digite o numero: ");
    scanf("%lf", &n);
    logaritmo= (log(n)/log(b));
    printf("O logaritmo e igual a: %lf\n", logaritmo);
    return 0;
}
