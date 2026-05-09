#include <stdio.h>

int main() {
    int carros_vendidos;
    float valor_vendas, sal_fixo, comissao_fixa, sal_final;
    printf("Num. carros, Total vendas, Salario fixo, Comissao por carro: ");
    scanf("%d %f %f %f", &carros_vendidos, &valor_vendas, &sal_fixo, &comissao_fixa);
    sal_final = sal_fixo + (carros_vendidos * comissao_fixa) + (valor_vendas * 0.05);
    printf("Salario final: R$ %.2f\n", sal_final);
    return 0;
}