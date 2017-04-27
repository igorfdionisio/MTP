#include <stdio.h>
#include <stdlib.h>
#include <complex.h>

int main()
{
    double complex A, B, Z;
    double rA, rB,iA,iB;
    printf("Entre com a real A: ");
    scanf("%lf", &rA);
    printf("Entre com a imag A: ");
    scanf("%lf", &iA);
    printf("Entre com a real B: ");
    scanf("%lf", &rB);
    printf("Entre com a imag B: ");
    scanf("%lf", &iB);
    A=rA + I*iA;
    B=rB +I*iB;
    Z=A+B;
    printf("A soma e %lf + I*%lf", creal(Z), cimag(Z));
    return EXIT_SUCCESS;
}
