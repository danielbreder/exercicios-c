#include <stdio.h>
#include <math.h>

void pontoMedio(float xI, float yI, float xF, float yF, float *xMedio, float *yMedio){
    *xMedio = (xI+xF)/2;
    *yMedio = (yI + yF)/2;
}

int main () {
    float xI, yI, xF, yF, xMedio, yMedio;

    printf("Digite as cordenadas do ponto inicial(xI, yI): ");
    scanf("%f %f", &xI, &yI);

    printf("Digite as cordenadas do ponto final(xF, yF): ");
    scanf("%f %f", &xF, &yF);

    pontoMedio(xI, yI, xF, yF, &xMedio, &yMedio);
    printf("O ponto medio eh: (%.2f, %.2f)", xMedio, yMedio);

    return 0;
}