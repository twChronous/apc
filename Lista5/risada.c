#include <stdio.h>

int isVowel(char letra) {
    return (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u');
}

int isLaugh(char *risada) {
    int tam = 0;
    while (risada[tam] != '\0') {
        tam++;
    }

    char vogais[60];
    int contVogais = 0;

    for (int i = 0; i < tam; i++) {
        if (isVowel(risada[i])) {
            vogais[contVogais] = risada[i];
            contVogais++;
        }
    }

    for (int i = 0; i < contVogais / 2; i++) {
        if (vogais[i] != vogais[contVogais - 1 - i]) {
            return 0;
        }
    }

    return 1;
}

int main() {
    char risada[61];
     
    int tam = 0;
    int entradaValida = 0;

    scanf("%s", risada);

    while (risada[tam] != '\0') {
        tam++;
    }
    for (int i = 0; i < tam; i++) {
        if (isVowel(risada[i])) {
            entradaValida = 1;
            break;
        }
    }

    if (entradaValida) {
        int engracada = isLaugh(risada);

        if (engracada) {
            printf("S\n");
        } else {
            printf("N\n");
        }
    } else {
        printf("Valor invalido!\n");
    }

    return 0;
}
