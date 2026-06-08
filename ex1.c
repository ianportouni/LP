#include <stdio.h>

// Função recursiva que calcula o somatório
int somatorio(int n) {
    // Caso base: se n for 1, o somatório é o próprio 1
    if (n == 1) {
        return 1;
    }
    // Passo recursivo: n + somatório de (n - 1)
    else {
        return n + somatorio(n - 1);
    }
}

int main() {
    int n;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Por favor, insira um numero positivo maior que 0.\n");
    } else {
        int resultado = somatorio(n);
        printf("O somatorio de 1 ate %d eh: %d\n", n, resultado);
    }

    return 0;
}