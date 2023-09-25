#include <stdio.h>

int main() {
    unsigned long long cpf;
    
    scanf("%lld", &cpf);
    
    int digitos[11];
    long long temp = cpf;
    for (int i = 10; i >= 0; i--) {
        digitos[i] = temp % 10;
        temp /= 10;
    }
    int soma = 0;
    for (int i = 0; i < 9; i++) {
        soma += digitos[i] * (10 - i);
    }
    int digito1 = 11 - (soma % 11);
    if (digito1 >= 10) {
        digito1 = 0;
    }
    soma = 0;
    for (int i = 0; i < 10; i++) {
        soma += digitos[i] * (11 - i);
    }
    int digito2 = 11 - (soma % 11);
    if (digito2 >= 10) {
        digito2 = 0;
    }
    if (digito1 == digitos[9] && digito2 == digitos[10]) {
        printf("valido");
    } else {
        printf("invalido");
    }
    return 0;
}
