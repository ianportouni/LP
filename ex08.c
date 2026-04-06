#include <stdio.h>
int main(){
    int votos_brancos, votos_nulos, votos_validos, total_votos;
    float percentual_brancos, percentual_nulos, percentual_validos;

    printf("votos brancos: \n");
    scanf("%d", &votos_brancos);

    printf("votos nulos: \n");
    scanf("%d", &votos_nulos);

    printf("votos validos: \n");
    scanf("%d", &votos_validos);

    total_votos = votos_brancos + votos_nulos + votos_validos;

    printf("total de votos: %d\n", total_votos);

    percentual_brancos = (float)votos_brancos / total_votos * 100;
    percentual_nulos = (float)votos_nulos / total_votos * 100;
    percentual_validos = (float)votos_validos / total_votos * 100;

    printf("percentual de votos brancos: %.2f%%\n", percentual_brancos);
    printf("percentual de votos nulos: %.2f%%\n", percentual_nulos);
    printf("percentual de votos validos: %.2f%%\n", percentual_validos);

    return 1;
}

