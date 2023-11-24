int validaPeso(double pesoKg) {
    if(pesoKg < 0) return 0;
    else return 1;
}
void fazTonelada(double pesoKg) {
    double tonelada = pesoKg / 1000;
    return printf("%0.4f", tonelada);
}
void fazGrama(double pesoKg) {
    double grama = pesoKg * 1000;
    return printf("%0.4f", grama);
}
