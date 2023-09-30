#include <stdio.h>
#include <math.h>

int main() {
    unsigned long long Tempo;
    int Golpes;

    scanf("%llu %d", &Tempo, &Golpes);

    for (int i = 0; i < Golpes; i++) {
        if (Tempo % 2 == 0) {
            Tempo = (unsigned long long)pow(sqrt(Tempo) / 2, 2);
        } else {
            Tempo = (unsigned long long)pow(sqrt(Tempo), 2);
        }
        printf("%llu\n", Tempo);
    }

    return 0;
}
