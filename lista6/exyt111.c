#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int vetorA[10];

    for(i = 0; i < 10; i++){
        printf("Digite o valor da posicao %d do vetor A: ", i);
        scanf("%d", &vetorA[i]);
    }

    printf("\nVetor A: ");
    for(i = 0; i < 10; i++){
        printf("%d ", vetorA[i]);
    }
    printf("\nVetor B(quadrado do vetor A): ");
    for(i = 0; i < 10; i++){
        printf("%d ", vetorA[i] * vetorA[i]);
    }

    return 0;
}