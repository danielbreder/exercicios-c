#include <stdio.h>
#include <math.h>

int ehLetra(char x){
    if((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z')){
        return 1;
    }
    return 0;
}

int posicaoNoAlfabeto(char x){
    if(ehLetra(x) == 1){
        if(x >= 'a' && x <= 'z'){
            return x - 'a' + 1;
        }
        else {
            return x - 'A' + 1;
        }
    }
    return 0;
}

int main(){
    char x;

    printf("Digite um caractere: ");
    scanf("%c", &x);

    if(posicaoNoAlfabeto(x)){
        printf("O caractere '%c' ocupa a posicao %d no alfabeto\n", x, posicaoNoAlfabeto(x));
    }
    else{
        printf("Voce nao digitou uma letra.");
    }

    return 0;
}