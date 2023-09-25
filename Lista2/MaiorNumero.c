#include <stdio.h>

int main() {
    int primeiro, segundo, terceiro, quarto, maior = 0;
    scanf("%d %d %d %d", &primeiro, &segundo, &terceiro, &quarto);
    int numeros[] = {primeiro, segundo, terceiro, quarto};
    maior = numeros[0];
    for (int i = 0; i < 4; i++) {
        if(numeros[i] > maior){
            maior = numeros[i];
        }
    }
    printf("%d\n", maior);
}