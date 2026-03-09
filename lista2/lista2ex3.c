#include <stdio.h>
#include <math.h>

float valorDelta(float a, float b, float c) {
    float delta = b*2 - 4*a*c;
    return delta;
}

int main () {
    float a, b, c, delta;
    printf("Digite os valores de a, b e c: ");
    scanf("%f %f %f", &a, &b, &c);

    delta = valorDelta(a, b, c);
    printf("%.2f\n", delta);

    return 0;
}