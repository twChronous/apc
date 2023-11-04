#include <stdio.h>

int main() {
    char frase[10001];
    char palavraAlvo[41]; 
    char palavraSubstituta[41];
    char resultado[10001]; 

    fgets(frase, sizeof(frase), stdin);
    scanf("%s", palavraAlvo);
    scanf("%s", palavraSubstituta);

    int posicao = 0;
    int posicaoResultado = 0;

    while (frase[posicao] != '\0') {
        int encontrou = 1;
        int i = 0;
        
        while (palavraAlvo[i] != '\0') {
            if (frase[posicao + i] != palavraAlvo[i]) {
                encontrou = 0;
                break;
            }
            i++;
        }

        if (encontrou) {
            int j = 0;
            while (palavraSubstituta[j] != '\0') {
                resultado[posicaoResultado] = palavraSubstituta[j];
                posicaoResultado++;
                j++;
            }

            posicao += i;
        } else {
            resultado[posicaoResultado] = frase[posicao];
            posicao++;
            posicaoResultado++;
        }
    }

    resultado[posicaoResultado] = '\0';

    printf("%s", resultado);

    return 0;
}
