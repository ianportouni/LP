#include <stdio.h>

int resto15(int num1, int num2);
int main(){
    int n1, n2;
    printf("digite um numero: ");
    scanf("%d", &n1);
    printf("digite um numero: ");
    scanf("%d", &n2);
    resto15(n1, n2);
    return 0;
}

int resto15(int num1, int num2){
    for(int i = num1 ; i <= num2; i++){
        if(i % 13 == 15){
            return printf("%d ", i);
        }
    }
    return 0;
}