#include <stdio.h>
int main(){
    float A[10], x, M[10];
    printf("digite o valor de X: ");
    scanf("%f", &x);
    for(int i = 0; i<10; i++){
        printf("digite um número: ");
        scanf("%f", &A[i]);
        M[i] = A[i] * x;
    }
    for(int j = 0; j<10; j++){
        printf("O resultado da multiplicação do número %.2f por X é: %.2f\n", A[j], M[j]);
    }
    return 0;

}
