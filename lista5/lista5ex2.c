#include <stdio.h>
#include <stdlib.h>

float calculaPotencia(int num, int pot) {
    int resultado = 1;
    while(pot > 0){
        resultado = resultado * num;
		pot--;
    }
    return resultado;
}

int main() {
    int num, pot;

    printf("Digite um numero: ");
    scanf("%d", &num);

    printf("Elevado a: ");
    scanf("%d", &pot);

    printf("Resultado: %.2f\n", calculaPotencia(num, pot));

    return 0;
}