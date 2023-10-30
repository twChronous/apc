#include <stdio.h>

int main() {
    char c;
    char input[101];
    int len = 0;

    while ((c = getchar()) != '\n') {
        input[len++] = c;
    }
    for (int i = len - 1; i >= 0; i--) {
        printf("%c - %d\n", input[i], input[i]);
    }

    return 0;
}
