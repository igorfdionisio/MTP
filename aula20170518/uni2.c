#include <stdio.h>
union U{
    char str[4];
    int n;
};
int main(){
    union U un;
    printf("Digite uma palavra com 3 letras: ");
    fgets(un.str, 4, stdin);
    printf("\nInteiro em hexadecimal: 0x%X\n", un.n);
    return 0;
}
