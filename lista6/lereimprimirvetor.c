#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int valor[5];

    for(i = 0; i < 5; i++){
        printf("Digite o valor da posicao %d do vetor: ", i);
        scanf("%d", &valor[i]);
    }
    
    printf("\n");

    for(i = 0; i < 5; i++){
        printf("%d ", valor[i]);
    }

    return 0;
}