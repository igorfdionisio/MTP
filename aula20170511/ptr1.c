#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i;
    unsigned int x = 0xFACA8421;
    unsigned char *p;//byte
    printf("endereco: %p | conteudo: %u\n", &x, x);
    p= (unsigned char *) &x;//static_cast muda o tipoda variavel
    for (i=0; i<sizeof(x); i++)//sizeof retorna o tamanho em bytes
        printf("Em : %p | contem: %u ou %X\n", p+i, p[i], p[i]);//p[i]=*p+i
    return EXIT_SUCCESS;
}
