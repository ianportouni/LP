#include <stdio.h>

int main() {
    float salario, reajuste, novo_salario;
    printf("Salario atual e percentual de reajuste: ");
    scanf("%f %f", &salario, &reajuste);
    novo_salario = salario + (salario * reajuste / 100);
    printf("Novo salario: R$ %.2f\n", novo_salario);
    return 0;
}