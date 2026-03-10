#include <stdio.h>

const float PI = 3.141592;

float volEsfera(float raio) {
    float v = (4.0/3.0)*PI*(raio*raio*raio);
    return v;
}

int main() {
    float r, vol;

    printf("Digite o raio da esfera: ");
    scanf("%f", &r);

    vol = volEsfera(r);
    printf("O volume da esfera eh: %.2f\n", vol);

    return 0;
}