#include <stdio.h>

int main(){
    float n1 , n2;
    int soma=0;
    printf("digite um numero: ");
    scanf("%f", &n1);
    printf("digite outro numero: ");
    scanf("%f", &n2);
    for (int i = 0; i <= (int)n1; i++){
        for(int _ = 0; _ <= (int)n2; _++){
            soma = soma+(i + _);
        }
    }
    printf("%d", soma);
    return 1;

}