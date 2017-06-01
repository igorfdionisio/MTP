#include <stdio.h>
#include <string.h>
void inverte(char frase[], int i){
    if (i>strlen(frase));
    else {
        printf("%c", frase[(strlen(frase)-i)]);
        i++;
        return inverte(frase, i);
    }
}
int main(){
    char frase[256];
    int i=1;
    printf("Digite uma frase: ");
    fgets(frase, 256, stdin);
    frase[strlen(frase)-1]='\0';
    inverte(frase, i);
    return 0;
}
