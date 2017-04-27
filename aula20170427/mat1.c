#include <stdio.h>
#include <math.h>

int main()
{
    float P1x, P1y, P2x, P2y;
    float distancia;
    printf("Entre com o coord x de P1: ");
    scanf("%f", &P1x);
    printf("Entre com o coord y de P1: ");
    scanf("%f", &P1y);
    printf("Entre com o coord x de P2: ");
    scanf("%f", &P2x);
    printf("Entre com o coord y de P2: ");
    scanf("%f", &P2y);
    distancia = sqrt(pow(P2x-P1x,2)+pow(P2y-P1y,2));
    printf("A distancia e: %g\n", distancia);
    return 0;
}
