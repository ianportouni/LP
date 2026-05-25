#include <stdio.h>

int main(){
    int Potencia(int a, int x);
    int base, elevado;
    printf("digite dois numeros ");
    scanf("%d %d", &base, &elevado);
    printf("o resultado é: %d", Potencia(base, elevado));

}

int Potencia(int a, int x){
    int multiplicacao = 1, cont = 0;
    do{
        multiplicacao = multiplicacao * a;
        cont = cont + 1;
    }while(cont < x);
    return multiplicacao;
}