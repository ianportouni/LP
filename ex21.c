#include <stdio.h>

int triangulo(int lado1, int lado2, int lado3);
int main(){
    int a, b, c;
    printf("Digite os lados do triângulo: ");
    scanf("%d %d %d", &a, &b, &c);
    triangulo(a, b, c);
    return 0;
}

int triangulo(int lado1, int lado2, int lado3){
    if(lado1 == lado2 && lado2 == lado3){
        printf("O triângulo é equilátero.");
    }
    else if(lado1 == lado2 || lado1 == lado3 || lado2 == lado3){
        printf("O triângulo é isósceles.");
    }
    else{
        printf("O triângulo é escaleno.");
    }
}