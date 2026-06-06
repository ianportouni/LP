#include <stdio.h>
int combinacao(int num, int desejado);
int main(){
    int n, desejado;
    printf("digite o numero de elementos: ");
    scanf("%d", &n);
    printf("O número desejado: ");
    scanf("%d", &desejado);
    combinacao(n, desejado);
    return 0;
}

int faotrial(int num){
    int fatorial = 1;
    for(int i = 1; i <= num; i++){
        fatorial = fatorial * i;
    }
    return fatorial;
}

int combinacao(int num, int desejado){
    int resultado = faotrial(num) / (faotrial(desejado) * faotrial(num - desejado));
    return printf("%d", resultado);
}
