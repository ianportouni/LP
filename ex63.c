#include <stdio.h>

int main (){
    int soma = 0, n[10];
    for(int i = 1; i <= 10; i++){
        printf("digite um número: ");
        scanf("%d",&n[i]);
        soma = soma + n[i];
    }
    printf("a soma dos numeros digitados e: %d", soma);
    return 1;
}   