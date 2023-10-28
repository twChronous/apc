#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int vetor1[N], vetor2[N], result[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &vetor1[i]);
    }

    for (int i = 0; i < N; i++) {
        scanf("%d", &vetor2[i]);
    }

    for (int i = 0; i < N; i++) {
        result[i] = vetor1[i] + vetor2[i];
    }

    for (int i = 0; i < N; i++) {
        printf("%d ", result[i]);
    }

    printf("\n");

    return 0;
}
