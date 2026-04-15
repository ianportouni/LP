#include <stdio.h>

int main(){
    int n[10], soma = 0;
    for(int i = 0; i<10; i++){
        printf("digite um valor: \n");
        scanf("%d",&n[i]);
        if (n[i]>=10 && n[i]<=20){
            soma++;
        }
    }
    printf("existem %d numeros entre 10 e 20", soma);
    return 1;
}