#include <stdio.h>

int main() {
    int dia = 1;
    int R;

    while (scanf("%d", &R) != EOF) {
        int melhorRestaurante = -1;
        int melhorAvaliacao = -1;

        for (int i = 0; i < R; i++) {
            int restaurant, rating;
            scanf("%d %d", &restaurant, &rating);

            if (rating > melhorAvaliacao || (rating == melhorAvaliacao && restaurant < melhorRestaurante)) {
                melhorRestaurante = restaurant;
                melhorAvaliacao = rating;
            }
        }

        printf("Dia %d\n", dia);
        printf("%d\n", melhorRestaurante);

        dia++; 
    }

    return 0;
}
