#include <stdio.h>
int main(){
   int horas_inicio, horas_fim, dia_hora;
    printf("Quando o jogo começou? (horas) \n");
    scanf("%d", &horas_inicio);
    printf("Quando o jogo terminou? (horas) \n");
    scanf("%d", &horas_fim);
    if (horas_fim - horas_inicio > 24) {
        printf("o jogo demorou mais do que 24 horas, portanto o jogo nao é valido");
    }
    else {
        printf("o jogo demorou %d horas", horas_fim - horas_inicio);
    }
}