#include <stdio.h>

int main() {
    int B, T;

    scanf("%d", &B);
    scanf("%d", &T);
    int area_esquerda = (B+T)*70/2;
    int area_total = 160 * 70;
    int area_direita = area_total - area_esquerda;

    if (area_esquerda > (area_total / 2)) {
        printf("1\n");
    } else if (area_direita > (area_total / 2)) {
        printf("2\n");
    } else {
        printf("0\n");
    }

    return 0;
}
