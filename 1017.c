#include <stdio.h>

int main(){
    float tempo, velocidade, distancia;
    double litros;

    scanf("%f", &tempo);
    scanf("%f", &velocidade);

    distancia = velocidade*tempo;
    litros = distancia/12.0;

    printf("%.3lf\n", litros);

    return 0;
}
