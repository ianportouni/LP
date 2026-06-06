#include <stdio.h>
int proprioStrlen(char s[]);
int proprioStremp(char s1[], char s2[]);
int proprioStrcpy(char *destino, char *origem);
int proprioStrcat(char *destino, char *origem);
int proprioStrfind(char *s, char c);

int main(){
    char string[100];
    printf("digite uma string: ");
    scanf("%s", string);
    int resultado = proprioStrlen(string);
    printf("O tamanho da string é: %d", resultado);
    return 0;
}

int proprioStrlen(char s[]){
    int i = 0;
    while(s[i] != '\0'){
        i++;
    }
    return i;
}

int proprioStremp(char s1[], char s2[]){
    int i = 0;
    while(s1[i] != '\0' && s2[i] != '\0'){
        if(s1[i] != s2[i]){
            return 0;
        }
        i++;
    }
    if(s1[i] == '\0' && s2[i] == '\0'){
        return 1;
    }
    return 0;
}

int proprioStrcpy(char *destino, char *origem){
    int i = 0;
    while(origem[i] != '\0'){
        destino[i] = origem[i];
        i++;
    }
    destino[i] = '\0';
    return 0;
}

int proprioStrcat(char *destino, char *origem){
    int i = 0, j = 0;
    while(destino[i] != '\0'){
        i++;
    }
    while(origem[j] != '\0'){
        destino[i] = origem[j];
        i++;
        j++;
    }
    destino[i] = '\0';
    return 0;
}

int proprioStrfind(char *s, char c){
    int i = 0;
    while(s[i] != '\0'){
        if(s[i] == c){
            return i;
        }
        i++;
    }
    return -1;
}

