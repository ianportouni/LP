#include <stdio.h>
int raizMaior(int num);
int main(){
    int n; 
    printf("digite um numero: ");
    scanf("%d", &n);
    raizMaior(n);
    return 0;
}

int raizMaior(int num){
    int i = 0;
    while(i*i <= num){
        i++;
    }
    return printf("%d", i - 1);
}