#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int vetor[N];
    int odd[N];
    int even[N];

    int count_odd = 0;
    int count_even = 0;

    for (int i = 0; i < N; i++) {
        scanf("%d", &vetor[i]);
        if (vetor[i] % 2 == 0) {
            odd[count_odd] = vetor[i];
            count_odd++;
        } else {
            even[count_even] = vetor[i];
            count_even++;
        }
    }

    for (int i = 0; i < count_odd; i++) {
        if (i > 0) {
            printf(" ");
        }
        printf("%d", odd[i]);
    }
    printf("\n");
    for (int i = 0; i < count_even; i++) {
        if (i > 0) {
            printf(" ");
        }
        printf("%d", even[i]);
    }
    printf("\n");

    return 0;
}
