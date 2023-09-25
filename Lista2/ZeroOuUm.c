#include <stdio.h>

int main() {
    int A,B,C = 0;
    scanf("%d %d %d", &A, &B, &C);
    if ((A == 0 && B == 0 && C == 0) || (A == 1 && B == 1 && C == 1 )) printf("empate");
    if ((A == 1 && B == 0 && C == 0) || (A == 0 && B == 1 && C == 1)) printf("A");
    if ((A == 0 && B == 1 && C == 0) || (A == 1 && B == 0 && C == 1)) printf("B");
    if ((A == 0 && B == 0 && C == 1) || (A == 1 && B == 1 && C == 0)) printf("C");
    return 0;
}