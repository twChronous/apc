#include <stdio.h>

int main() {
    int repeticoes, sum = 0;
    int inputs[50];

    scanf("%d", &repeticoes);
    for (int i = 0; i < repeticoes; i++) {
        scanf("%d", &inputs[i]);
        sum += inputs[i];
    }
    printf("%d", sum);
    return 0;
}