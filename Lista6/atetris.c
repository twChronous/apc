#include <stdio.h>

#define MAX_N 15

void imprimirMatriz(int N, int matriz[MAX_N][MAX_N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int linhaContemApenasUns(int N, int linha[MAX_N]) {
    for (int i = 0; i < N; i++) {
        if (linha[i] == 0) {
            return 0;  
        }
    }
    return 1;
}

void ajustarMatriz(int N, int matriz[MAX_N][MAX_N]) {
    for (int j = 0; j < N; j++) {
        int posZero = N - 1;
        for (int i = N - 1; i >= 0; i--) {
            if (matriz[i][j] == 1) {
                matriz[i][j] = 0;
                matriz[posZero][j] = 1;
                posZero--;
            }
        }
    }
}

int main() {
    int N;
    scanf("%d", &N);

    int matriz[MAX_N][MAX_N];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    imprimirMatriz(N, matriz);

    int contemApenasUns = 1;

    while (contemApenasUns) {
        for (int i = 0; i < N; i++) {
            if (linhaContemApenasUns(N, matriz[i])) {
                for (int j = 0; j < N; j++) {
                    matriz[i][j] = 0;
                }
            }
        }

        ajustarMatriz(N, matriz);

        imprimirMatriz(N, matriz);

        contemApenasUns = 0;
        for (int i = 0; i < N; i++) {
            if (linhaContemApenasUns(N, matriz[i])) {
                contemApenasUns = 1;
                break;
            }
        }
    }

    return 0;
}
