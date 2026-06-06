#include <stdio.h>
void fahrenheit();
int main(){
    printf("tabela em celcius para fahrenheit: \n");
    fahrenheit();
    return 0;
}

void fahrenheit(){
    float matriz[100][2], conversao;
    for(int i = 0; i<=100; i++){
        conversao = (((50 + i)-32)*5)/9;
        matriz[i][0] = 50+i;
        matriz[i][1] = conversao;
    }

    for(int i = 0; i<=100; i++){
        printf("\n%2.f \t %2.f", matriz[i][0], matriz[i][1]);
    }
}