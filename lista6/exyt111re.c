#include <stdio.h>
#include <stdlib.h>

void dobraVetor(int vetor[], int tam){
    int i;
    for(i = 0; i < tam; i++){
        printf("%d ", vetor[i] * 2);
    }
}

int main(){
    int i, vetorA[5];

    for(i = 0; i < 5; i++){
        printf("Digite o valor do indice %d: ", i);
        scanf("%d", &vetorA[i]);
    }

    printf("Vetor A: \n");
    for(i = 0; i < 5; i++){
        printf("%d ", vetorA[i]);
    }

    printf("\nO dobro dos elementos desse vetor eh: \n");
    dobraVetor(vetorA, 5);
    
    return 0;
}