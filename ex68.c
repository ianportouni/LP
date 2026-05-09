#include <stdio.h>

int main(){
    int estoque;
    float media, soma = 0;
    printf("quanto de mercadoria? ");
    scanf("%d", &estoque);
    float preco[estoque];
    for(int i = 0; i < estoque; i++){
        printf("digite o preco do produto %d: ", i+1);
        scanf("%f", &preco[i]);
        soma = soma + preco[i];
    }
    media = soma / estoque;
    printf("a media dos precos e: %.2f", media);
    return 1;
}