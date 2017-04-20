#include <stdio.h>
#include <string.h>

int main(){
    char palavra[256];
    int i=0;
    printf("Digite uma palavra: ");
    scanf("%s", palavra);
    while(palavra[i]!='\0')
        i++;
    printf("A palavra que voce digitou possui %d caracteres", i);
    return 0;
}
