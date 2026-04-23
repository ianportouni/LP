#include <stdio.h>
int main(){
    int vet[50], cont = 0;
    for(int i = 0; i<50; i++){
        printf("A[%d]: ", i);
        scanf("%d", &vet[i]);
    }
    for(int j = 0; j<50; j++){
        for(int k = j+1; k<50; k++){
            if(vet[j] == vet[k]){
                cont = cont + 1;
            }
        }
    }
    int a[cont];
    for(int l = 0; l<50; l++){
        for(int m = l+1; m<50; m++){
            if(vet[l] == vet[m]){
                a[l] = l, m;
            }
        }
    }
    printf("existem %d números repetidos no vetor.", cont);
    printf("\nOs números repetidos nas posições: ");
    for(int n = 0; n<cont; n++){
        printf("%d ", a[n]);
    }
    return 0;

}