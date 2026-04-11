#include <stdio.h>
int main (){
    float a1, a2;
    float media;
    char resposta;
    do{
        printf("digite um numero: ");
        scanf("%f", &a1);
        printf("digite outro numero: ");
        scanf("%f", &a2);
        media = (a1 + a2) / 2;
        printf("a media é: %.2f\n", media);
        printf("deseja calcular a media de outros numeros? (s/n): ");
        scanf(" %c", &resposta);
    }while(resposta == 's' || resposta == 'S');
    return 0;
}