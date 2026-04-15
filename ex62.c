#include <stdio.h>
int main(){
    int alunos;
    float notas[alunos], media = 0;
    printf("digite o numero de alunos: \n");
    scanf("%d",&alunos);
    for(int i = 0; i < alunos; i++){
        printf("digite a nota do aluno %d: ", i+1);
        scanf("%f", &notas[i]);
        media += notas[i];
    }
    media = media / alunos;
    printf("a media da turma e: %.2f", media);
    return 0;
}