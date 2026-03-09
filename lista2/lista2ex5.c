#include <stdio.h>
#include <math.h>

const pi = 3.141592;

float volEsfera (float r) {
    float v = 4/3*pi*(r*r*r);
    return v;
}

int main() {
    float r, vol;

    printf("Qual eh o raio da esfera? ");
    scanf("%f", &r);

    vol = volEsfera(r);
    printf("O volume da esfera eh: %.2f\n", vol);
} 