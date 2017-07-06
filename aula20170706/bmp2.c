#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef unsigned char Byte;//1byte
typedef unsigned short Word;//2 bytes
typedef unsigned int Dword;//4bytes
typedef
    struct RGB{ Byte B, G, R;}
RGB;
int main(){
    FILE * arquivo, *destino;
    RGB pixel;
    Byte byte; Word word; Dword dword; Byte lixo=0;
    int WPX, HPX, BPP, NCP, NIC, AUX, PAL, j, i, aux;
    arquivo =fopen("robin.bmp", "rb");
    destino=fopen("rob.bmp", "wb");
    if (!arquivo){
        fprintf(stderr, "Arquivo inexistente!\n");
        return EXIT_FAILURE;
    }
    fread(&byte, sizeof(Byte),1,arquivo);
    fwrite(&byte, sizeof(Byte),1,destino);
    fread(&byte, sizeof(Byte),1,arquivo);
    fwrite(&byte, sizeof(Byte),1,destino);
    fread(&dword, sizeof(Dword),1,arquivo);
    fwrite(&dword, sizeof(Dword),1,destino);
    fread(&word, sizeof(Word),1,arquivo);
    fwrite(&word, sizeof(Word),1,destino);
    fread(&word, sizeof(Word),1,arquivo);
    fwrite(&word, sizeof(Word),1,destino);
    fread(&dword, sizeof(Dword),1,arquivo);
    fwrite(&dword, sizeof(Dword),1,destino);
    fread(&dword, sizeof(Dword),1,arquivo);
    fwrite(&dword, sizeof(Dword),1,destino);
    fread(&dword, sizeof(Dword),1,arquivo);
    fwrite(&dword, sizeof(Dword),1,destino);
    WPX = dword; //largura
    fread(&dword, sizeof(Dword),1,arquivo);
    fwrite(&dword, sizeof(Dword),1,destino);
    HPX = dword; //Altura
    fread(&word, sizeof(Word),1,arquivo);
    fwrite(&word, sizeof(Word),1,destino);
    fread(&word, sizeof(Word),1,arquivo);
    fwrite(&word, sizeof(Word),1,destino);
    BPP=word;
    fread(&dword, sizeof(Dword),1,arquivo);
    fwrite(&dword, sizeof(Dword),1,destino);
    fread(&dword, sizeof(Dword),1,arquivo);
    fwrite(&dword, sizeof(Dword),1,destino);
    fread(&dword, sizeof(Dword),1,arquivo);
    fwrite(&dword, sizeof(Dword),1,destino);
    fread(&dword, sizeof(Dword),1,arquivo);
    fwrite(&dword, sizeof(Dword),1,destino);
    fread(&dword, sizeof(Dword),1,arquivo);
    fwrite(&dword, sizeof(Dword),1,destino);
    fread(&dword, sizeof(Dword),1,arquivo);
    fwrite(&dword, sizeof(Dword),1,destino);
    printf("*******************************\n\n");
    PAL = floor((BPP*WPX + 31.)/32.)*4;
    AUX = PAL - WPX*3;
    for(j=0; j<HPX; j++){
        for(i=0; i<WPX;i++){
            fread(&pixel, sizeof(RGB), 1, arquivo);
            aux=pixel.R;
            pixel.R=pixel.G;
            pixel.G=aux;
            fwrite(&pixel, sizeof(RGB), 1, destino);
        }
    if (AUX > 0)
        fseek(arquivo, AUX, SEEK_CUR);
        for(i=0;i<AUX;i++){
            fwrite(&lixo, sizeof(Byte), 1, destino);
        }
    }
    fclose(arquivo);
    fclose(destino);
    return EXIT_SUCCESS;
}
