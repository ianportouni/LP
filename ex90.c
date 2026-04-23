#include <stdio.h>
int main(){
    int a[30], x, cont = 0;
    printf("digite um numero: ");
    scanf("%d", &x);
    for(int i = 0; i<30; i++){
        printf("A[%d]: ", i);
        scanf("%d", &a[i]);
    }
    for(int j = 0; j<30; j++){
        if (x == a[j]){
            cont = cont + 1;
        }
    }
    printf("O número %d aparece %d vezes no vetor.", x, cont);

    return 0;

}