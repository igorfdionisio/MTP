#include <stdio.h>

void safeFlush() {
    char c;
    while((c = getchar()) != EOF && c != '\n');
}
int main(){
    float a, b, c, d, e;
    float media;
    printf("Digite as notas A, B,C,D e E, do aluno:");
    scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);
    media =((a*2)+(b*2)+(c*2)+(d*3)+(e*5))/14;
    printf("a media das notas e: %f", media);
    return 0;
}
