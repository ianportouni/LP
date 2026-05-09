#include <stdio.h>

int main() {
    int total, brancos, nulos, validos;
    printf("Total de eleitores, brancos, nulos e validos: ");
    scanf("%d %d %d %d", &total, &brancos, &nulos, &validos);
    printf("Brancos: %.2f%%\n", (float)brancos/total * 100);
    printf("Nulos: %.2f%%\n", (float)nulos/total * 100);
    printf("Validos: %.2f%%\n", (float)validos/total * 100);
    return 0;
}