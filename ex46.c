#include <stdio.h>

int main(){
    float n1 , n2;
    float divisao =0;
    printf("digite um numero: ");
    scanf("%f", &n1);
    printf("digite outro numero: ");
    scanf("%f", &n2);
    for(; n2 == 0;){
        printf("VALOR INVALIDO!\n");
        printf("o segundo numero tem que ser maior que zero, digite novamente: ");
        scanf("%f", &n2);
    }
    divisao = n1/n2;
    printf("%.2f", divisao);
    return 1;
}