#include <stdio.h>
#include <math.h>

float converteParaF(float C) {
    float F = 1.8*C+32;
    return F;
}

main () {
    float fah, celsius;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);

    fah = converteParaF(celsius);
    printf("A temperatura em Fahrenheit é: %.0f\n", fah);

    return 0;
}