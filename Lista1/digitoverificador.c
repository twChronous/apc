#include <stdio.h>

int main() {
    int contaCorrente;

    scanf("%d", &contaCorrente);

        int soma = 0;
        int multiplicador = 2;

        for (int i = 0; i < 6; i++) {
            int digito = contaCorrente % 10;
            soma += digito * multiplicador;
            multiplicador++;
            contaCorrente /= 10;
        }

        int resto = soma % 11;
        int digitoVerificador = 11 - resto;


        printf("%d\n", digitoVerificador);
    return 0;
}
