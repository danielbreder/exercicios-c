#include <stdio.h>
#include <math.h>

float distanciaEntrePontos(float pontoXA, float pontoYA, float pontoXB, float pontoYB){
    return sqrt(pow(pontoXA - pontoXB, 2) + pow(pontoYA - pontoYB, 2));
}

int main() {
    float pontoXA, pontoYA, pontoXB, pontoYB, distancia;

    printf("Digite os dois dados dos pontos A: ");
    scanf("%f %f", &pontoXA, &pontoYA);
    printf("Digite os dois dados dos pontos B: ");
    scanf("%f %f", &pontoXB, &pontoYB);

    distancia = distanciaEntrePontos(pontoXA, pontoYA, pontoXB, pontoYB);
    printf("A distancia entre os pontos A e B eh: %.2f\n", distancia);

    return 0;
}