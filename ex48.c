#include <stdio.h>
int main(){
    float p1, p2, media;
    printf("Digite a nota da primeira pessoa: \n");
    scanf("%f", &p1);
    if (p1 < 0 || p1 > 10) {
        printf("Nota invalida, a nota deve ser maior do que zero e menor ou igual a 10");
        return 1;
    }
    printf("Digite a nota da segunda pessoa: \n");
    scanf("%f", &p2);
    if (p2 < 0 || p2 > 10) {
        printf("Nota invalida, a nota deve ser maior do que zero e menor ou igual a 10");
        return 1;
    }
    media = (p1 + p2) / 2;
    printf("A media das notas é: %.2f", media);

    return 1;
}