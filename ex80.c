#include <stdio.h>
int main(){
    float Q[20], maior;
    int posição = 0;
    
    for(int i = 0; i < 20; i++){
        do {
            printf("digite um numero maior que 0: ");
            scanf("%f", &Q[i]);
        } while (Q[i] < 0);
    }
    for(int j = 0; j< 20; j++){
        if(Q[j] > Q[j+1]){
            maior = Q[j];
            posição = j;
        }
        else{
            maior = Q[j+1];
            posição = j+1;
        }
    }
    printf("O maior numero é %.2f e está na posição %d\n", maior, posição+1);

}