#include <stdio.h>
#include <math.h>

const float pi = 3.141592;

float angEmRad(float graus) {
    float rad = pi*graus/180.0;
    return rad;
}

float areaTriangulo (float ladoA, float ladoB, float angFormado){
    float area = ladoA*ladoB*sin(angFormado)/2.0;
    return area;
}

int main() {
    float ladoA = 3, ladoB = 4, angFormado = 90, rad;
    
    rad = angEmRad(angFormado);
    printf("A area do trioangulo eh: %.1f\n", areaTriangulo(ladoA, ladoB, rad));
    return 0;
}