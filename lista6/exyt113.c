#include <stdio.h>
#include <stdlib.h>

 int imprimeInverso(int vetor[]){
    int i;
    printf("\nVetor invertido: ");
    for(i = 4; i >= 0; i--){
        printf("%d ", vetor[i]);
    }
 }

int main(){
    int i, vetorN[5];

    printf("Vetor A: \n");
    for(i = 0; i < 5; i++){
        printf("Digite o valor da posicao %d: ", i);
        scanf("%d", &vetorN[i]);
    }
    
    printf("Vetor N: ");
    for(i = 0; i < 5; i++){
        printf("%d ", vetorN[i]);
    }

    printf(imprimeInverso(vetorN));

    return 0;
}