#include <stdio.h>

float Divisao(float a1, float a2);
int main(){
    float m1, m2;
    printf("digite dois numeros: ");
    scanf("%f %f", &m1, &m2);
    printf("A divisão é: %.2f", Divisao(m1, m2));
    return 0;
}

float Divisao(float a1, float a2){
    float divisao = 0;
    if(a1 < a2){
            return printf("A divisão é 0");
        }
    else{
        do{
            divisao = a1 - a2;
            a1 = divisao;
        }while(divisao >= a2);
        return divisao;    
    }

}