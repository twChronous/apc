#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int vetor1[N], vetor2[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &vetor1[i]);
    }

    for (int i = 0; i < N; i++) {
        scanf("%d", &vetor2[i]);
    }

    int equal = 1;
    for (int i = 0; i < N; i++) {
        if (vetor1[i] != vetor2[i]) {
            equal = 0; 
            break;
        }
    }

    if (equal) {
        printf("sim\n");
    } else {
        printf("nao\n");
    }

    return 0;
}
