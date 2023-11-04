#include <stdio.h>

int main() {
    int count = 0;
    char c;

    while ((c = getchar()) != EOF) {
        if (c == 'o') {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
