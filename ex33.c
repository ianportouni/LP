#include <stdio.h>
int quantidedesDivisores(int num);
int main(){
    int n;
    printf("digite um numero: ");
    scanf("%d", &n);
    printf("quantidade de divisores: %d", quantidedesDivisores(n));
    return 0;
}

int quantidedesDivisores(int num){
    int quantidade = 0;
    for(int i = 1; i <= num; i++){
        if(num % i == 0){
            quantidade += 1;
        }
    }
    return quantidade;
}