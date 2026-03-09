#include <stdio.h>
#include <math.h>

float distanciaPontos (float xA, float yA, float xB, float yB){
    float distancia = sqrt(pow(xA-xB, 2) + pow(yA-yB, 2));
    return distancia;
}

int main () {
    float xA, yA, xB, yB, dist;

    printf("Digite a distancia de dois pontos: ");
    scanf("%f %f %f %f", &xA, &yA, &xB, &yB);

    dist = distanciaPontos(xA, yA, xB, yB);
    printf("A distancia entre os dois primeiros dos dois ultimos eh: %.2f\n", dist);
    
    return 0;
}