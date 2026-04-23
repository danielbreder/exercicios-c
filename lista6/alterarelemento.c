#include <stdio.h>
#include <stdlib.h>

//int dobraElemento(valor[]){
    
//}//

int main(){
    int i;
    int valor[5];

    for(i = 0; i < 5; i++){
        printf("Digite o valor da posicao %d: ", i);
        scanf("%d", &valor[i]);
    }

    printf("\nO quadrado desses valores sao, respectivamente: ");
    for(i = 0; i < 5; i++){
        printf("%d ", valor[i] * valor[i]);
    }

    return 0;
}