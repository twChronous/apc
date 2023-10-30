#include <stdio.h>

int main() {
    int len = 0;
    char input[1001]; 

    scanf("%s", input);
    for (int i = 0; input[i] != '\0'; i++) {
        len++;
    }
    printf("%d\n", len);
    return 0;
}
