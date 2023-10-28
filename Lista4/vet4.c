#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int vetor[N];
    int indices_odd[N];
    int indices_even[N];

    int count_odd = 0;
    int count_even = 0;

    for (int i = 0; i < N; i++) {
        scanf("%d", &vetor[i]);
        if (vetor[i] % 2 == 0) {
            indices_odd[count_odd] = i;
            count_odd++;
        } else {
            indices_even[count_even] = i;
            count_even++;
        }
    }
    for (int i = 0; i < count_odd; i++) {
        printf("%d ", indices_odd[i]);
    }
    printf("\n");
    for (int i = 0; i < count_even; i++) {
        printf("%d ", indices_even[i]);
    }
    printf("\n");

    return 0;
}
