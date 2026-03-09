#include <stdio.h>;
#include <math.h>;

const float pi = 3.141592;

float transformaEmRad(float graus){
    float rad = pi*graus/180;
    return rad;
}

int main() {
    float g;

    printf("Digite o angulo em graus: ");
    scanf("%f", &g);

    printf("Esse angulo em radianos eh: %.4f\n", transformaEmRad(g));
    
    return 0;
}