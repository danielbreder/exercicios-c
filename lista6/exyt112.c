#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    int a[5], b[5], c[5];

    printf("Vetor A: \n");
    for(i = 0; i < 5; i++){
        printf("Digite o valor da posicao %d: ", i);
        scanf("%d", &a[i]);
    }

    printf("Vetor B: \n");
    for(i = 0; i < 5; i++){
        printf("Digite o valor da posicao %d: ", i);
        scanf("%d", &b[i]);
    }
    
    printf("Vetor A: ");
    for(i = 0; i < 5; i++){
        printf("%d ", a[i]);
    }
    printf("\nVetor B: ");
    for(i = 0; i < 5; i++){
        printf("%d ", b[i]);
    }

    for(i = 0; i < 5; i++){
        c[i] = a[i] + b[i];
    }

    printf("\nVetor C: ");
    for(i = 0; i < 5; i++){
        printf("%d ", c[i]);
    }

    return 0;
}