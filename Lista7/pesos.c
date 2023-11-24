///#include <stdio.h>

int validaPeso(double pesoKg) {
    if(pesoKg < 0) return 0;
    else return 1;
}
void fazTonelada(double pesoKg) {
    double tonelada = pesoKg / 1000;
    printf("%0.4f\n", tonelada);
}
void fazGrama(double pesoKg) {
    double grama = pesoKg * 1000;
    printf("%0.4f\n", grama);
}

// int main(){
//     double peso = 10.000;
//     int grama = validaPeso(peso);
//     printf("%d \n", grama);
//     fazGrama(peso);
//     fazTonelada(peso);
// }