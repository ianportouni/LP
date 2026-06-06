#include <stdio.h>

void reverse(int v[], int n);

int main(){
    char resposta;
    int v[100], i = 0;
    do{
        printf("Digite um numero: ");
        scanf("%d", &v[i]);
        i = i + 1;
        printf("Deseja continuar? (s/n) ");
        scanf(" %c", &resposta);
    } while (resposta == 's' || resposta == 'S');

    reverse(v, i);

    printf("Array invertido:\n");
    for(int j = 0; j < i; j++) {
        printf("%d ", v[j]);
    }
    printf("\n");

    return 0;
}

void reverse(int v[], int n){
    int aux;
    for(int i = 0; i < n/2; i++){
        aux = v[i];
        v[i] = v[n - 1 - i];
        v[n - 1 - i] = aux;
    }
}