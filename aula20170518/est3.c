#include <stdio.h>
typedef
    struct RGB{float r, g, b;}
RGB;
typedef
    struct YCbCr{float y, cb, cr;}
YCbCr;
int main(){
    RGB  X;
    YCbCr Y;
    printf("Digite os valores de R, G e B, respectivamente: ");
    scanf ("%f %f %f", &X.r, &X.g, &X.b);
    Y.y=16+(65.481*((X.r)/255)+128.553*((X.g)/255)+24.996*((X.b)/255));
    Y.cb=128+(-37.797*((X.g)/255)-74.203*((X.g)/255)+112*((X.b)/255));
    Y.cr=128+(112*((X.b)/255)-93.786*((X.g)/255)-18.214*((X.b)/255));
    printf("Os valores de Y', Cb e Cr respectivamente sao:");
    printf("\n%.0f\n%.0f\n%.0f\n", Y.y, Y.cb, Y.cr);
    return 0;
}
