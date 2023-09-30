#include <stdio.h>

int main() {
    int L, M;

    scanf("%d", &L);
    scanf("%d", &M);

    for (int i = 0; i < L; i++) {
        for (int j = 0; j < M; j++) {
            printf("[%03d,%03d]", i, j);
        }
        printf("\n");
    }

    return 0;
}
