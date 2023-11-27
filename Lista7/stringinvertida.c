#include <stdio.h>

int main() {
    char str[100];
    scanf("%[^\n]s", str);
    int tamanho = 0;
    while (str[tamanho] != '\0') {
        tamanho++;
    }
    for (int i = tamanho - 1; i >= 0; i--) {
        printf("%c - %d\n", str[i], str[i]);
    }

    return 0;
}
