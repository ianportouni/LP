#include <stdio.h>
#include <string.h>

int Palindromo(char palavra[]);

int main(){
    int resultado;
    char v[50];
    printf("Digite uma string: ");
    fgets(v, sizeof(v), stdin);
    // Remove newline character if present
    size_t len = strlen(v);
    if (len > 0 && v[len - 1] == '\n') {
        v[len - 1] = '\0';
    }
    resultado = Palindromo(v);
    printf("Resultado: %d\n", resultado);
    return 0;
}

int Palindromo(char palavra[]){
    for(int i = 0; i < (strlen(palavra)-1)/2; i++){
        if(palavra[i] != palavra[strlen(palavra)-1-i]){
            return 0;
        }
    }
    return 1;
}