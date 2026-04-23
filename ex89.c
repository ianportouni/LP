#include <stdio.h>
int main(){
    float A[15], M[15];
    int cont = 0;
    for(int i = 0; i<15; i++){
        printf("digite um número: ");
        scanf("%f", &A[i]);
        printf("digite um número: ");
        scanf("%f", &M[i]);
    }
    for(int j = 0; j<15; j++){
        if(A[j] == M[j]){
            cont = cont + 1;
        }
    }
    printf("OS VETORES V1 E V2 POSSUEM %d ELEMENTOS EM COMUM NA MESMA POSIÇÃO", cont);
    return 0;

}