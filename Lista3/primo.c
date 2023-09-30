#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }
    if (num <= 3) {
        return 1;
    }
    if (num % 2 == 0 || num % 3 == 0) {
        return 0;
    }

    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return 0;
        }
    }

    return 1;
}

int isArrojado(int num) {
    while (num > 9) {
        if (!isPrime(num)) {
            return 0;
        }
        num /= 10;
    }
    return isPrime(num);
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int n;
        scanf("%d", &n);

        if (isArrojado(n)) {
            printf("S\n");
        } else {
            printf("N\n");
        }
    }

    return 0;
}
