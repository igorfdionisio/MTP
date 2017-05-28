#include <stdio.h>
enum estacao{verao, outono, inverno, primavera};
int main(){
    int aux;
    enum estacao est;
    printf("Digite o numero do mes que voce nasceu: ");
    scanf("%d", &aux);
    if(aux==1 || aux==2 || aux==12)
        est=0;
    if(aux==3||aux==4||aux==5)
        est=1;
    if(aux==6||aux==7||aux==8)
        est=2;
    if(aux==9||aux==10||aux==11)
        est=3;
    switch(est)
    {
    case verao:
        printf("\nVoce nasceu no verao!\n");
        break;
    case outono:
        printf("\nVoce nasceu no outono!\n");
        break;
    case inverno:
        printf("\nVoce nasceu no inverno!\n");
        break;
    case primavera:
        printf("\nVoce nasceu na primavera!\n");
        break;
    }
    return 0;
}
