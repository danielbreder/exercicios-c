#include <stdio.h>
#include <math.h>

const float pi = 3.141592;

float angEmRad(float graus) {
    float rad = pi*graus/180.0;
    return rad;
}

int main() {
    float graus, rad;

    printf("Digite o valor do angulo em graus: ");
    scanf("%f", &graus);

    rad = angEmRad(graus);
    printf("O angulo em radianos eh: %.4f\n", rad);

    return 0;
}