#include <stdio.h>
int main(){
    float n[10];
    int quntidade_negativos = 0;
    for (int i = 0; i < 10; i++){
        printf("digite um valor: \n");
        scanf("%f", &n[i]);
        if (n[i] < 0) {
            quntidade_negativos++;
        }
    }
    printf("Quantidade de valores negativos: %d\n", quntidade_negativos);
    return 1;
}