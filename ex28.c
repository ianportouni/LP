
#include <stdio.h>
int fibonacci(int num); 
int main(){
    int n;
    printf("digite um numero: ");
    scanf("%d", &n);
    fibonacci(n);
    return 0;
}

int fibonacci(int num){
    int a = 0, b = 1, c;
    if(num == 0){
        return printf("%d", a);
    }
    if(num == 1){
        return printf("%d", b);
    }
    for(int i = 2; i <= num; i++){
        c = a + b;
        a = b;
        b = c;
    }
    return printf("%d", c);
}