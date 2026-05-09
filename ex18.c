#include <stdio.h>

int main() {
    float pot_lamp, larg, comp, area, pot_total;
    printf("Potencia da lampada (W) e dimensoes (L x C): ");
    scanf("%f %f %f", &pot_lamp, &larg, &comp);
    area = larg * comp;
    pot_total = area * 18;
    printf("Serao necessarias %.0f lampadas.\n", pot_total / pot_lamp);
    return 0;
}