#include <stdio.h>;
#include <math.h>;

float valorDelta(float a, float b, float c){
    float delta = b*2-4*a*c;
    return delta;
}

int main() {
    float a, b, c;

    printf("Digite os valores de A, B e C, respectivamente: ");
    scanf("%f %f %f", &a, &b, &c);

    printf("O valor de delta eh: %.2f\n", valorDelta(a, b, c));

    return 0;
}