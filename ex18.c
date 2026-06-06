#include <stdio.h>

int somatorio(int num);
int main(){
    int n;
    printf("digite um numero: ");
    scanf("%d", &n);
    somatorio(n);
    return 0;
}

int somatorio(int num){
    int soma;
    for(int i = 0; i<=num; i++){
        soma = soma + i;
    }
    return printf("%d", soma);
}