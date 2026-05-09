#include <stdio.h>
int main (){
    int n;
    do{
        printf("digite um numero de 1 a 10 : ");
        scanf("%d", &n);
    }while(n<1 || n>10);
    for(int i = 1; i <= 10; i++){
        printf("%d * %d = %d\n", n, i, i*n);
    }
    return 1;
}