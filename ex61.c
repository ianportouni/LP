#include <stdio.h>

int main(){
    int n[10], soma = 0, media = 0;
    for(int i = 0; i<10; i++){
        printf("digite um valor: \n");
        scanf("%d",&n[i]);
        if (n[i]>=10 && n[i]<=20){
            soma++;
        }
    }
    printf("existem %d numeros entre 10 e 20", soma);
    media = (n[0]+n[1]+n[2]+n[3]+n[4]+n[5]+n[6]+n[7]+n[8]+n[9])/10;
    printf("\na media dos numeros digitados e: %d", media);
    return 1;
}