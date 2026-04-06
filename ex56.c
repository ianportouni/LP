#include <stdio.h>
int main(){
    int n;
    do{
        printf("Digite um numero de 1 a 10: \n");
        scanf("%d", &n);
    } while (n < 1 || n > 10);
    for (int i = 1; i <= 10; i++){
        printf("%d X %d = %d\n", n, i, n * i);
    }
    return 1;
}