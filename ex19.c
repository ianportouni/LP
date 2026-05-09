#include <stdio.h>

int main() {
    float comp, larg, alt, area_total;
    printf("Comprimento, largura e altura: ");
    scanf("%f %f %f", &comp, &larg, &alt);
    area_total = (2 * comp * alt) + (2 * larg * alt);
    printf("Quantidade de caixas: %.2f\n", area_total / 1.5);
    return 0;
}