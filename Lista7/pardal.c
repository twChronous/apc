#include <stdio.h>

double calculaVelocidadeMedia(int tA, int tB, double distancia){
    return (tB-tA) / distancia;
}
//double calculaVelocidadeMedia(int tA, int tB, double distancia){

//}

int main(){
    double vel = calculaVelocidadeMedia(61200,63000,60.0);
    printf("%f", vel);
}