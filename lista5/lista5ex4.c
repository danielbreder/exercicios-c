#include <stdio.h>
#include <stdlib.h>

float calculaFatorial(float n) {
    float fatorial = 1;
    while(n > 0){
        fatorial = fatorial * n;
		n--;
    }
    return fatorial;
}

int main() {
    float n;

    printf("Digite um numero para calcular o fatorial dele: ");
    scanf("%f", &n);

    printf("\nFatorial de %.0f: \n%.2f", n, calculaFatorial(n));

    return 0;
}