#include <stdio.h>

int main() {
    long int hora = 0;
    scanf("%ld", &hora);

    long int minutos = hora * 60;
    long int segundos = hora * 3600;

    printf("%ld\n", minutos);
    printf("%ld\n", segundos);

    return 0;
}
