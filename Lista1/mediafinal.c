#include <stdio.h>

int main() {
    double P1, P2, P3, T, L1, L2, L3, L4, L5 = 0;
    scanf("%lf", &P1);
    scanf("%lf", &P2);
    scanf("%lf", &P3);
    scanf("%lf", &T);
    scanf("%lf", &L1);
    scanf("%lf", &L2);
    scanf("%lf", &L3);
    scanf("%lf", &L4);
    scanf("%lf", &L5);
    double mf = (P1 + 2*P2 + 3*P3 + 2*T) / 8;
    double ml = (L1 + L2 + L3 + L4 + L5) / 10;
    printf("%.2lf", mf+ml);
    return 0;
}