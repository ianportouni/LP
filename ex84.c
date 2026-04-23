#include <stdio.h>
int main(){
    int n;
    printf("digite o número de elementos do vetor: ");
    scanf("%d", &n);
    float a[n], b[n], soma[n];
    for(int i = 0; i<n; i++){
        printf("digite o valor do vetor A[%d] ", i);
        scanf("%f", &a[i]);
        printf("digite o valor do vetor B[%d] ", i);
        scanf("%f", &b[i]);
        soma[i] = a[i] + b[i];
    }
    for(int j = 0; j<n; j++){
        printf("vetor Soma[%d] = %.2f", j, soma[j]);
    }
    
    return 0;

}