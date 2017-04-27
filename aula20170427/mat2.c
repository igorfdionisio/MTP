#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, teta, c;
    printf("Digite o lado 'b' do triangulo: ");
    scanf("%f", &b);
    printf("Digite o lado 'c' do triangulo: ");
    scanf("%f", &c);
    printf("Digite o angulo entre b e c: ");
    scanf("%f", &teta);
    a= sqrt(pow(b,2)+pow(c,2)-2*b*c*cos(teta));
    printf("o lado a do triangulo: %g\n", a);
    return 0;
}


