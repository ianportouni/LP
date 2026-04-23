#include <stdio.h>
int main(){
    float Q[20], menor;
    int posição = 0;
    
    for(int i = 0; i < 20; i++){
        do {
            printf("digite um numero maior que 0: ");
            scanf("%f", &Q[i]);
        } while (Q[i] < 0);
    }
    for(int j = 0; j< 20; j++){
        if(Q[j] < Q[j+1]){
            menor = Q[j];
            posição = j;
        }
        else{
            menor = Q[j+1];
            posição = j+1;
        }
    }
    printf("O menor numero é %.2f e está na posição %d\n", menor, posição+1);

}