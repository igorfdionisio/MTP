#include <stdio.h>
#include <stdlib.h>
#define NCHAR 256
int main()
{
    int opc,i;
    long long int *p;
    long long int numero;
    char *pc;
    char frase[NCHAR];
    printf("1-Criptografar\n");
    printf("2-Descriptografar\n");
    scanf("%d", &opc); getchar();
    if (opc==1){
        for (i=0; i<NCHAR;i++)
            frase[i]='\0';
        printf("Entre com uma frase:\n");
        fgets(frase, NCHAR, stdin);
        printf("Criptografando...\n");
        p=(long long int*)frase;
        for(i=0;i<sizeof(frase)/sizeof(long long int);i++)
            printf("%lld ", p[i]);
        return EXIT_SUCCESS;
    }
    if (opc==2)
    {
        printf("Entre com os codigos, '0' para encerrar:\n");
        pc = (char*)&numero;
        do{
            scanf("%lld", &numero);
            for(i=0;i<sizeof(numero);i++)
                printf("%c", pc+i);
        }while(numero!=0);
        return EXIT_SUCCESS;
    }
    printf("opcao nao reconhecida!\n");
    return EXIT_FAILURE;
}
