//#include <stdio.h>

double calculaVelocidadeMedia(int tA, int tB, double distancia){
    double tempoFinal = (float)tB / 3600;
    double tempoInicial = (float)tA / 3600;
    double velMed =  distancia / (tempoFinal - tempoInicial);
    return velMed;
}
int levouMulta(int tA, int tB, double distancia, double velocidadeMaxima){
    double vel = calculaVelocidadeMedia(tA, tB, distancia);
    return vel > velocidadeMaxima ? 1 : 0;
}

// int main(){
//     double vel = calculaVelocidadeMedia(61200,63000,60.0);
//     int multa = levouMulta(61200,63000,60.0,120.0);
//     printf("%lf, %d \n", vel, multa);
// }