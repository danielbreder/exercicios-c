#include <stdio.h>
#include <math.h>

float converteParaF (float c){
    float f = 1.8 * c + 32;
    return f;
}

int main () {
    float c, f;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &c);

    f = converteParaF(c);
    printf("A temperatura em Fahrenheit eh: %.0f\n", f);
}