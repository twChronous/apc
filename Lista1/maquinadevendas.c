#include <stdio.h>

int main() {
    int P, V, troco, moedas500, moedas100, moedas50,moedas10,moedas5, moedas1;
    
    scanf("%d", &P);
    scanf("%d", &V);

    troco = V - P;

    moedas500 = troco / 500;
    troco %= 500;
    moedas100 = troco / 100;
    troco %= 100;
    moedas50 = troco / 50;
    troco %= 50;
    moedas10 = troco / 10;
    troco %= 10;
    moedas5 = troco / 5;
    troco %= 5;
    moedas1 = troco;

    printf("%d\n", moedas500);
    printf("%d\n", moedas100);
    printf("%d\n", moedas50);
    printf("%d\n", moedas10);
    printf("%d\n", moedas5);
    printf("%d\n", moedas1);

    return 0;
}
