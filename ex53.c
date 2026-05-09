#include <stdio.h>
int main (){
    int n;
    do{
        printf("digite um numero > 0 : ");
        scanf("%d", &n);
    }while(n <= 0);
    for(int i = 1; i <= n; i++){
        printf("%d > ", i);
    }
    return 0;
}