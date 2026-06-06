#include <stdio.h>
int binario(int num);
int main(){
    int n;
    printf("digite um numero: ");
    scanf("%d", &n);
    binario(n);
}

int binario(int num){
    int v[100];
    int i = 0;
    do{
        v[i] = num % 2;
        i++;
        num = (int) num/2;
    }while(num != 0);
    for(int j = i - 1; j >= 0; j--){
        printf("%d", v[j]);
    }
}