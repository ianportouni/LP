#include <stdio.h>

int main(){
 int nPrimos(int n1, int n2);
 int x, y;
 printf("digite o valor de x e y, sendo x<y ");
 scanf("%d %d", &x, &y);
 int resultado = nPrimos(x,y);
 printf("A quantidade de números primos entre %d e %d é: %d", x, y, resultado);
 return 0;
}

int nPrimos(int n1, int n2){
 int quantidadeprimos = 0;
 for(int i = n1; i<= n2; i++){
 int cont = 0;
 for(int j = 1; j<=i; j++){
 if(i%j == 0){
 cont = cont + 1;
 }
 }
 if(cont == 2){
 quantidadeprimos += 1;
 }
 }
 return quantidadeprimos;
}