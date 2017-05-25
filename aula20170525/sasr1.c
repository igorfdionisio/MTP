#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
void responde(){
    int idfrase=rand()%9;
    switch(idfrase){
    case 0:
        printf("\nTudo bem?\n");
        break;
    case 1:
        printf("\nOk\n");
        break;
    case 2:
        printf("\nLOL!\n");
        break;
    case 3:
        printf("\nQue legal\n");
        break;
    case 4:
        printf("\nQue chato\n");
        break;
    case 5:
        printf("\nFale mais sobre isso..\n");
        break;
    case 6:
        printf("\nSobre o que quer falar\n");
        break;
    case 7:
        printf("\nEu nao acho..\n");
        break;
    case 8:
        printf("\nTa bom, eu aceito\n");
        break;
    }
}
int main(){
    srand(time(NULL));
    char frase[256];
    int i;
    printf("Saudacoes meu jovem!!\n");
    do{
        fgets(frase, 256, stdin);
        frase[strlen(frase)-1]='\0';
        for (i=0; i<strlen(frase); i++)
            frase[i] = tolower(frase[i]);
        responde();
    } while(strncmp(frase, "tchau", 5)!=0);
    printf("\nVlw flw!");
    return 0;
}
