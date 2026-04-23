#include <stdio.h>
int main(){
    int a[20], n, cont = 0;
    printf("numero a procurar: ");
    scanf("%d", &n);
    for(int i = 0; i<20; i++){
        printf("digite um valor ");
        scanf("%d", &a[i]);
    }
    for(int j = 0; j<20; j++){
        if(a[j] != n){
            cont = cont + 1;            
        }
    }
    int b[cont];
    for(int k = 0; k<20; k++){
        if(a[k] != n){
            b[k] = a[k];
        }
    }
    for(int l = 0; l<cont; l++){
        printf("\nelemento %d: %d", l, b[l]);
    }
}