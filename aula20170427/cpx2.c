#include <stdio.h>
#include <stdlib.h>
#include <complex.h>

int main()
{
    double rN, iN, N, P;
    printf("Digite a parte real do numero: ");
    scanf("%lf", &rN);
    printf("Digite a parte imaginaria do numero: ");
    scanf ("%lf", &iN);
    N = rN + I*iN;
    P = rN*(-I*iN)+rN*rN+I*iN*(-I*iN);
    printf("a  ultiplicacao pelo conjugado e: %lf\n", creal(P), cimag(P));
    return EXIT_SUCCESS;
}
