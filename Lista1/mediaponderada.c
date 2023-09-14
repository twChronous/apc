#include <stdio.h>

int main() {
    double x_end, x1, x2, p1, p2;

    scanf("%lf", &x_end);
    scanf("%lf", &x2);
    scanf("%lf", &p1);
    scanf("%lf", &p2);

    x1 = ((x_end * (p1 + p2)) - (x2 * p2)) / p1;

    printf("%lf", x1);
    return 0;
}