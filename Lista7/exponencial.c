//#include <stdio.h>

double fatorial(int n) {
    if (n == 0 || n == 1) {
        return 1.0;
    } else {
        return n * fatorial(n - 1);
    }
}
int power(int num, int pot){
    int i,resul=1;
    for(i=0; i < pot; i++) {
        resul *= num;
        if(pot == 0){
            resul = 1;
        }
    }
  	return resul;
}
double exp_natural(int x, int n) {
    double resultado = 1.0;

    for (int i = 1; i <= n; i++) {
        resultado += (double)power(x, i) / fatorial(i);
    }

    return resultado;
}
// int main() {
//     double resultado = exp_natural(3, 4);

//     printf("%lf\n", resultado);

//     return 0;
// }
