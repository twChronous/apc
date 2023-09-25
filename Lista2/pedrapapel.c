#include <stdio.h>

int main() {
    int Sheldon, Kripke = 0;
    scanf("%d %d", &Sheldon, &Kripke);

    char ganhador =
        (Sheldon == 0 && (Kripke == 3 || Kripke == 2)) || // Pedra ganha de lagarto (esmagando-o); Pedra ganha de tesoura (quebrando-a);
        (Sheldon == 1 && (Kripke == 0 || Kripke == 4)) || // Papel ganha de pedra (embrulhando-o) Papel ganha de Spock (refutando-o);
        (Sheldon == 2 && (Kripke == 1 || Kripke == 3)) || // Tesoura ganha de papel (cortando-o); • Tesoura ganha de lagarto (decaptando-o);
        (Sheldon == 3 && (Kripke == 4 || Kripke == 1)) || // Lagarto ganha de Spock (envenenando-o);  Lagarto ganha de papel (comendo-o);
        (Sheldon == 4 && (Kripke == 2 || Kripke == 0))  ? 'A' : 'B'; // Spock ganha de tesoura (derretendo-a) e; • Spock ganha de pedra (vaporizando-a).

    if (Sheldon == Kripke) {
        printf("empate");
    }else {
        printf("%c", ganhador);
    }
    return 0;
}