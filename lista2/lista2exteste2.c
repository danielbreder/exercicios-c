#include <stdio.h>;
#include <math.h>;

const float pi = 3.141592;

float transformaEmRad(float graus){
    float rad = pi*graus/180;
    return rad;
}

float areaTriangulo(float a, float b, float angFormado){
    float area = a*b*sin(angFormado)/2;
    return area;
}

int main() {
    float ladoA, ladoB, ang, rad, resultado;

    printf("Digite os valores dos lados do triangulo: ");
    scanf("%f %f", &ladoA, &ladoB);

    printf("Digite o angulo do triangulo: ");
    scanf("%f", &ang);

    rad = transformaEmRad(ang);
    resultado = areaTriangulo(ladoA, ladoB, rad);
    printf("A area eh: %.1f\n", resultado);

    return 0;
}