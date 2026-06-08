#include <stdio.h>

// Função recursiva que calcula a soma dos cubos
int somaCubos(int n) {
    if (n == 1) {
        return 1;
    } else {
        return (n * n * n) + somaCubos(n - 1);
    }
}

int main() {
    int n;
    printf("Digite um numero inteiro positivo para a soma dos cubos: ");
    scanf("%d", &n);

    if (n > 0) {
        printf("A soma dos cubos ate %d^3 eh: %d\n", n, somaCubos(n));
    } else {
        printf("Por favor, insira um numero maior que 0.\n");
    }

    return 0;
}