#include <stdio.h>
int main()
{
    int t_mapa = 0;
    int soma = 0, maior_s = 0, c_ref = 0;
    scanf("%d", &t_mapa);
    int mapa[t_mapa][t_mapa];

    for (int l = 0; l < t_mapa; l++) {
        for (int c = 0; c < t_mapa; c++) {
            scanf("%d", &mapa[l][c]);
        }
    }

    for (int c = 0; c < t_mapa; c++) {
        soma = 0;
        for (int l = 0; l < t_mapa; l++) {
            soma += mapa[l][c]; //somo a coluna
        }
        if (soma > maior_s) {
            maior_s = soma;
            c_ref = c; //gravo a coluna com a maior soma
        }
    }
    
    if (maior_s == 0) {
        printf("0\n");
    }
    else {
        printf("%d\n", c_ref+1);
    }

    return 0;
}