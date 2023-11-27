#include <stdio.h>

int contarEstrelas(int qtd, int abertura) {
    int estrelasPossiveis = 0;

    for (int i = 0; i < qtd; i++) {
        int fluxoFotons;
        scanf("%d", &fluxoFotons);

        if (fluxoFotons * abertura >= 40000000) {
            estrelasPossiveis++;
        }
    }

    return estrelasPossiveis;
}

int main() {
    printf("%d \n",contarEstrelas(3,1000));
    return 0;
}
