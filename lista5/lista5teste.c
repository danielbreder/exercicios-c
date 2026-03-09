#include <stdio.h>
#include <locale.h>

float piso(float x);
float teto(float x);

int main() {
    float x;
    printf("Forneça um número: ");
    scanf("%f", &x);

    printf("Piso de %.2f --> %.2f\n",  x, piso(x));
    printf("Piso de %.2f --> %.2f\n", -x, piso(-x));
    printf("Teto de %.2f --> %.2f\n",  x, teto(x));
    printf("Teto de %.2f --> %.2f\n", -x, teto(-x));

    return 0;
}

// Função para o piso (floor)
float piso(float x) {
    int i;

    // Percorre inteiros de -10000 até +10000 (intervalo amplo)
    for (i = -10000; i <= 10000; i++) {
        if (i > x)
            return i - 1; // o anterior é o piso
    }
    return i;
}

// Função para o teto (ceil)
float teto(float x) {
    int i;

    for (i = -10000; i <= 10000; i++) {
        if (i >= x)
            return i; // o primeiro inteiro maior ou igual é o teto
    }
    return i;
}