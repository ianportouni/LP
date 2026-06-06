#include <stdio.h>

int MultiSomaDiv(int n1, int n2);
int main(){
    int num1 , num2;
    printf("Digite dois numeros: ");
    scanf("%d %d", &num1, &num2);
    printf("A multiplicação é: %d", MultiSomaDiv(num1, num2));
    return 0;
}

int MultiSomaDiv(int n1, int n2){
    int soma = 0;
    if (n2 >= 0) {
        for(int i = 0; i < n2; i++){
            soma = soma + n1;
        }
    } else {
        for(int i = 0; i < -n2; i++){
            soma = soma - n1;
        }
    }
    return soma;
}