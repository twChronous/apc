#include <stdio.h>

int main() {
    int input = 0;
    scanf("%d", &input);
    for (int i = 0; i < input; i++) {
        if(i % 2 == 0) {
        printf("THUMS THUMS THUMS\n");
        } else printf("THUMS THUMS THUMS THUMS THUMS THUMS\n");
    }
    return 0;
}