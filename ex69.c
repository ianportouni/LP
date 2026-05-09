#include <stdio.h>
int main(){
    int i = 0;
    char resposta = 'N';
    float preço;
    float soma = 0;
    do{
        printf("preço da mercadoria: ");
        scanf("%f", &preço);
        soma = soma + preço;
        printf("mais mercadorias? S/N ");
        scanf(" %c", &resposta);
        while (resposta != 'S' && resposta != 's' && resposta != 'N' && resposta != 'n'){
            printf("mais mercadorias? S/N ");
            scanf(" %c", &resposta);
        }
        i++;
    }while (resposta == 'S' || resposta == 's');
    printf("soma dos preços: %.2f\n", soma);
    float media = soma / i;
    printf("a media dos preços e: %.2f", media);
    return 1;
}