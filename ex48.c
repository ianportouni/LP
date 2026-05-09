#include <stdio.h>
int main (){
    float a[2];
    float media;
    for(int i = 0; i < 2; i++){
        printf("digite um numero: ");
        scanf("%f", &a[i]);
    }
    media = (a[0] + a[1]) / 2;
    printf("a media é: %.2f", media);
    return 0;
}