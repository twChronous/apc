#include <stdio.h>

void toLowerCase(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32; 
        }
    }
}

int isAlphabeticalOrder(char *str) {
    int i = 0;
    toLowerCase(str);
    while (str[i] != '\0' && str[i + 1] != '\0') {
        if (str[i] >= str[i + 1]) {
            return 0;
        }
        i++;
    }
    return 1;
}
int main() {
    int P;
    scanf("%d", &P);

    char palavras[1001][43]; 
    int ordenadas[1001];

    for (int i = 0; i < P; i++) {
        scanf("%s", palavras[i]);
        ordenadas[i] = isAlphabeticalOrder(palavras[i]);
    }

    for (int i = 0; i < P; i++) { //0 N / 1 O
        printf("%s: %c\n", palavras[i], ordenadas[i] ? 'O' : 'N');
    }

    return 0;
}
