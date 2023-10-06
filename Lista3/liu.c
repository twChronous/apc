#include <stdio.h>
#include <math.h>

// Resumo do Liu Kang:

// Vc receberá dois valores, o T e o G;
// T é a linha do tempo que vc está (é o número que vc vai usar nas contas);
// G é quantas vezes vc precisará repetir o código (quantas vezes o seu loop vai repetir);
// Dado um G, vc precisa tirar a raiz quadrada desse número. Para isso, inclua a biblioteca <math.h> no início.
// Depois, atribua a função "sqrt(T)" a uma variável. Ex: variavel = sqrt(T);
// A "variavel" vai receber o valor da raiz quadrada do numero T.
// Se esse número for par, vc subtrai um e eleva ao quadrado (multiplica por ele mesmo). Esse será o seu novo T.
// Se esse número for ímpar, vc dobra o número, subtrai um e eleva ao quadrado. Esse número será o seu novo T.
// Depois de obter seu novo T, vc printa esse valor, e o loop executará novamente com o novo T.

int main() {
    long long Tempo, TempoParsed = 0;
    int Golpes;

    scanf("%lld %d", &Tempo, &Golpes);

    for (int i = 0; i < Golpes; i++) {
        TempoParsed = sqrt(Tempo);
        if (TempoParsed % 2 == 0) {
            Tempo = (TempoParsed - 1) * (TempoParsed - 1);
        } else {
            Tempo = (TempoParsed * 2 - 1) * (TempoParsed * 2 - 1);
        }
        printf("%lld\n", Tempo);
    }

    return 0;
}