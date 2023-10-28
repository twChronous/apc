#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int vetor[N];
    long long sum = 0; 
    for (int i = 0; i < N; i++) {
        scanf("%d", &vetor[i]);
        sum += vetor[i];
    }

    int media = sum / N;
    int higher_media = 0;

    for (int i = 0; i < N; i++) {
        if (vetor[i] > media) {
            printf("%d", vetor[i]);
            if (i < N - 1) printf(" ");
            higher_media = 1;
        }
    }
    if (!higher_media) {
        printf("0 \n");
    }
    return 0;
}
