#include <stdio.h>
int main(){
    float a[20];
    for(int i = 0; i<20; i++){
        printf("digite um valor ");
        scanf("%f", &a[i]);
    }
    for(int j = 0; j<20; j++){
        printf("\nelemento %d: %.2f", 20-j, a[19-j]);
    }
    return 0;
}