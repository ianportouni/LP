#include <stdio.h>

// Função recursiva que calcula k elevado a n
int potencia(int k, int n) {
    if (n == 0) {
        return 1;
    } else {
        return k * potencia(k, n - 1);
    }
}

int main() {
    int k, n;
    printf("Digite a base (k) e o expoente (n) separados por espaco: ");
    scanf("%d %d", &k, &n);

    if (n >= 0) {
        printf("%d elevado a %d eh: %d\n", k, n, potencia(k, n));
    } else {
        printf("O expoente (n) deve ser um inteiro positivo ou zero.\n");
    }

    return 0;
}