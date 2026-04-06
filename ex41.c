#include <stdio.h>
int main(){
    float n1, n2, n3, media_exercicios, media_final;
    printf("Digite a nota do primeiro teste: \n");
    scanf("%f", &n1);
    printf("Digite a nota do segundo teste: \n");
    scanf("%f", &n2);
    printf("Digite a nota do terceiro teste: \n");
    scanf("%f", &n3);
    printf("Digite a media dos exercicios: \n");
    scanf("%f", &media_exercicios);
    media_final = (n1 + n2*2 + n3*3 + media_exercicios) / 7;
    if (media_final >= 9) {
        printf("A\n");
        printf("A media final do aluno é: %.2f", media_final);
    }
    else if (media_final >= 7.5 && media_final < 9) {
        printf("B\n");
        printf("A media final do aluno é: %.2f", media_final);
    }
    else if (media_final >= 6 && media_final < 7.5) {
        printf("C\n");
        printf("A media final do aluno é: %.2f", media_final);
    }
    else{
        printf("D\n");
        printf("A media final do aluno é: %.2f", media_final);
    }
}