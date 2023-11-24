#include <stdio.h>

#define MAX_ROWS 20
#define MAX_SEATS 25

void imprimirMapa(int rows, int seats, char mapa[MAX_ROWS][MAX_SEATS]) {
    printf("  ");
    for (int i = 1; i <= seats; i++) {
        printf("%02d ", i);
    }
    printf("\n");

    for (int i = 0; i < rows; i++) {
        printf("%c ", 'A' + i);
        for (int j = 0; j < seats; j++) {
            printf("%s ", mapa[i][j] == 'X' ? "XX" : "--");
        }
        printf("\n");
    }
}

int main() {
    int rows, seats;
    scanf("%d %d", &rows, &seats);

    char mapa[MAX_ROWS][MAX_SEATS];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < seats; j++) {
            mapa[i][j] = '-';
        }
    }

    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        char fileira;
        int lugar;
        scanf(" %c%d", &fileira, &lugar);

        int indexFileira = fileira - 'A';
        int indexLugar = lugar - 1;

        if (indexFileira >= 0 && indexFileira < rows && indexLugar >= 0 && indexLugar < seats) {
            mapa[indexFileira][indexLugar] = 'X';
        }
    }

    imprimirMapa(rows, seats, mapa);

    return 0;
}
