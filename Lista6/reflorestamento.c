#include <stdio.h>

int main() {
    int N = 0;
    int maiorSoma = 0;
    int maiorColuna = 0;
    int columnSums[500] = {0};
    int matrix[500][500] = {0}; 

    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int j = 0; j < N; j++) {
        for (int i = 0; i < N; i++) {
            columnSums[j] += matrix[i][j];
        }
    }

    for (int j = 0; j < N; j++) {
        if(columnSums[j] > maiorSoma) {
            maiorSoma = columnSums[j];
            maiorColuna = j;
        }
    }
    if (maiorSoma == 0) printf("0\n");
    else printf("%d\n", maiorColuna + 1);
    return 0;
}
