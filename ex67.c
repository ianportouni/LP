#include <stdio.h>

int main(){
    int soma = 0, media = 0;
    for(int i = 15; i <= 100; i++){
        soma = soma + i;
    }
    media = soma / 86;
    printf("a media dos numeros entre 15 e 100 e: %d", media);
    return 1;
}