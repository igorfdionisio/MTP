#include <stdio.h>
#include <stdlib>
#include <ctype.h>
#define NCHAR 256

int main(){
    char frase[NCHAR];
    printf("digite uma frase: ");
    fgets(frase,NCHAR,stdin);
    printf("A frase em munusculas :\n%s", frase);
    return EXIT_SUCESS;

}
