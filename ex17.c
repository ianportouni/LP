#include <stdio.h>

int main(){
 void romano(int n);
 int numero = 0;
 printf("digite um numero: ");
 scanf("%d", &numero);
 romano(numero);
 return 0;
}

void romano(int n){
    if (n == 0){
        printf("O número 0 não tem representação em algarismos romanos.");
    }
    if(1<= n && n < 4){
        for(int i = 0; i < n; i++){
            printf("I");
        }
        n = n - n;
    }
    if(n == 4){
        printf("IV");
        n = n - 4;
    }
    if(n == 5){
        printf("V");
        n = n - 5;
    }
    if(6 <= n && n < 9){
        printf("V");
        for(int i = 0; i < n - 5; i++){
            printf("I");
        }
        n = n - n;
    }
    if(n == 9){
        printf("IX");
        n = n - 9;
    }
    if( 10 <= n && n < 40){
        int quantidadde = n/10;
        for(int i = 0; i < quantidadde; i++){
            printf("X");
        }
        n = n - quantidadde *10;
    }
    if( 40 <= n && n < 50){
        printf("XL");
        n = n - 40;
    }
    if( 50 <= n && n < 90){
        printf("L");
        int quantidadde = n/10;
        for(int i = 0; i < quantidadde - 5; i++){
            printf("X");
        }
        n = n - quantidadde *10;
    }
    if( 90 <= n && n < 100){
        printf("XC");
        n = n - 90;
    }
    if( 100 <= n && n < 400){
        int quantidadde = n/100;
        for(int i = 0; i < quantidadde; i++){
            printf("C");
        }
        n = n - quantidadde *100;
    }
    if( 400 <= n && n < 500){
        printf("CD");
        n = n - 400;
    }
    if( 500 <= n && n < 900){
        printf("D");
        int quantidadde = n/100;
        for(int i = 0; i < quantidadde - 5; i++){
            printf("C");
        }
        n = n - quantidadde *100;
    }
    if( 900 <= n && n < 1000){
        printf("CM");
        n = n - 900;
    }
    if( 1000 <= n && n < 4000){
        int quantidadde = n/1000;
        for(int i = 0; i < quantidadde; i++){
            printf("M");
        }
        n = n - quantidadde *1000;
    }

}
