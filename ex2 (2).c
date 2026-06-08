#include <stdio.h>

// Função recursiva que calcula o fatorial
int fatorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * fatorial(n - 1);
    }
}

int main() {
    int n;
    printf("Digite um numero inteiro positivo para o fatorial: ");
    scanf("%d", &n);

    if (n >= 0) {
        printf("O fatorial de %d! eh: %d\n", n, fatorial(n));
    } else {
        printf("Por favor, insira um numero nao-negativo.\n");
    }

    return 0;
}