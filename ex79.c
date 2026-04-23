#include <stdio.h>
int main(){
    float nota[20];
    float soma = 0, media = 0;
    int media_acima = 0;
    for(int i =0; i < 20; i++){
        printf("qual a nota do aluno: ");
        scanf("%f", &nota[i]);
        soma = soma + nota[i];
    }
    media = soma/20;
    for(int j = 0; j < 20; j++){
        if(nota[j] > media){
            media_acima = media_acima + 1;
        }
    }
    printf("MEDIA DA TURMA: %.2f\n", media);
    printf("NÚMERO DE ALUNOS ACIMA DA MEDIA: %d\n", media_acima);
    return 0;

}