#include <stdio.h>

int main(){
    int Fatorial(int num);
    int n;
    printf("digite um numero: ");
    scanf("%d", &n);
    Fatorial(n);
}
int Fatorial(int num){
    int resultado = 1;
    for(int i = 0; i < num; i++){
        resultado = resultado * (num - i);
    }
    return printf("%d", resultado);
}