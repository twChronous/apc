#include <stdio.h>

void toLowerCase(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32; 
        }
    }
}

int main() {
    int c = 0;
    int len = 0;
    char input[101];
    char primeironome[101];
    char sobrenome[101]; 

    scanf("%s", input);
    while ((c = getchar()) != '\n') {
        input[len++] = c;
    }
    for (int i = len; input[i] != '\0'; i--) {
        for(int j = 0; input[i] != '\0'; i++) {
            sobrenome[j] = input[i];
        }
    }
    printf("%s", sobrenome);
    for(int i = 0; input[i] != '\0'; i++) {
        primeironome[i] = input[i];
    }

    toLowerCase(primeironome);
    toLowerCase(sobrenome);

    printf("%s.%s@unb.br\n", primeironome, sobrenome);

    return 0;
}
