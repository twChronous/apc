#include <stdio.h>

int imparOuPar(int numero1, int numero2) {
    return (numero1 + numero2) % 2;
}
int main() {
    int PrimeiroImparOuPar, JogadorA1, JogadorA2, SegundoImparOuPar, JogadorB1, JogadorB2, TerceiroImparOuPar, JogadorC1, JogadorC2 = 0;
    
    scanf("%d %d %d", &PrimeiroImparOuPar, &JogadorA1, &JogadorA2);
    scanf("%d %d %d", &SegundoImparOuPar, &JogadorB1, &JogadorB2);
    scanf("%d %d %d", &TerceiroImparOuPar, &JogadorC1, &JogadorC2);

    char vencedorA = (imparOuPar(JogadorA1, JogadorA2) == PrimeiroImparOuPar) ? 'A' : 'B';
    char vencedorB = (imparOuPar(JogadorB1, JogadorB2) == SegundoImparOuPar) ? 'C' : 'D';
    char campeao = (imparOuPar(JogadorC1, JogadorC2) == TerceiroImparOuPar) ? vencedorA : vencedorB;

    printf("%c\n", campeao);
    return 0;
}
