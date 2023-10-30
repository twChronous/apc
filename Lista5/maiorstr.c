#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    char string[101]; 
    int maiorTamanho = 0;

    for (int i = 0; i < N; i++) {
        scanf("%s", string);

        int tamanho = 0;
        while (string[tamanho] != '\0') {
            tamanho++;
        }

        if (tamanho > maiorTamanho) {
            maiorTamanho = tamanho;
        }
    }

    printf("%d\n", maiorTamanho);

    return 0;
}
