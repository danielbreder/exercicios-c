#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int ehLetra (char x){
    if((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z')){
        return 1;
    }
    return 0;
}

int posicaoAlfabeto(char x) {
    if(ehLetra(x)){
        if(x >= 'a' && x <= 'z'){
            return x - 'a' + 1;
        }
        else {
            return x - 'A' + 1;
        }
    }
    return 0;
}

int main() {
    char a;

    printf("Digite um caractere: ");
    scanf("%c",&a);

    printf("A posicao desse caractere no alfabeto eh: %d", posicaoAlfabeto(a));
    
    return 0;
}