#include <stdio.h>

int main() {
    int N, X;
    scanf("%d", &N);

    int vetor[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &vetor[i]);
    }

    scanf("%d", &X);

    int found = 0; 
    for (int i = 0; i < N; i++) {
        if (vetor[i] == X) {
            found = 1; 
            break;
        }
    }

    if (found) {
        printf("pertence\n");
    } else {
        printf("nao pertence\n");
    }

    return 0;
}
