#include <stdio.h>

int main(){
    int numeroprimo(int n);
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    if(numeroprimo(n) == 1){
        printf("O numero e primo");
    } else {
        printf("O numero nao e primo");
    }
    return 0;
}

int numeroprimo(int n){
    int cont = 0;
    if (n <= 1) {
        return 0; // Não é primo
    }
    for(int i = 1; i < n; i++){
        if(n%i == 0){
            cont = cont + 1;
        }
    }
    if(cont == 2)
        return 1;
    else
        return 0;
}