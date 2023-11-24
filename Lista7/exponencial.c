#include <stdio.h>

// Função para calcular o fatorial de um número
int fatorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    } else {
        return num * fatorial(num - 1);
    }
}

double exp_natural(int x, int n) {
    double resultado = 2.71828;

    for (int i = 1; i <= n; i++) {
        resultado += (double)x / fatorial(i);
    }

    return resultado;
}

int main() {
    double resultado = exp_natural(2, 7);
    printf("%lf\n", resultado);

    return 0;
}
