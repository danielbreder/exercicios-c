#include <stdio.h>;
#include <math.h>;

float converteParaFahrenheit(float celsius){
    float f = 1.8*celsius+32;
    return f;
}

int main() {
    float fah, c;

    printf("Digite uma temperatura em celsius: ");
    scanf("%f", &c);

    fah = converteParaFahrenheit(c);
    printf("Essa temperatura em Fahrenheit eh: %.0f F\n", fah);
    
    return 0;
}