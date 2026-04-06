#include <stdio.h>
int main(){
    float n, quantidade_numeros_inteiros;
    do {
        printf("Digite um numero positivo e diferente de zero: \n");
        scanf("%f", &n);
        } while (n <= 0);
    quantidade_numeros_inteiros = 0;
    for (int i = 1; i <= n; i++) {
        if (i == (int)i) {
            quantidade_numeros_inteiros++;
        }
    }
    printf("A quantidade de numeros inteiros entre 1 e %.0f é: %.0f\n", n, quantidade_numeros_inteiros);

    return 1;
}