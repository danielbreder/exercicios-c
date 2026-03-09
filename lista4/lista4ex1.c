#include <stdio.h>
#include <math.h>

int ehVogal(char x){
    if(x == 'a' || x == 'A' || x == 'e' || x == 'E' || x == 'i' || x == 'I' || x == 'o' || x == 'O' || x == 'u' || x == 'U'){
        return 1;
    }
    return 0;
}

int ehMinuscula(char x) {
    if(x >= 'a' && x <= 'z'){
        return 1;
    }
    return 0;
}

int ehMaiuscula(char x) {
    if(x >= 'A' && x <= 'Z'){
        return 1;
    }
    return 0;
}

int ehLetra (char x){
    if((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z')){
        return 1;
    }
    return 0;
}

int ehConsoante(char x){
    if((ehLetra(x)) && (!ehVogal(x))){
        return 1;
    }
    return 0;
}

int ehAlgarismo(char x) {
    if((!ehLetra(x))){
        return 1;
    }
    return 0;
}

int main () {
    char x;

    printf("Digite um caractere: ");
    scanf("%c", &x);

    if(ehVogal(x)){
        printf("\nIsso é uma vogal");
    }
    else {
        printf("\nIsso nao é uma vogal");
    }

    if(ehMinuscula(x)){
        printf("\nÉ minuscula");
    }
    else {
        printf("\nNao eh minuscula");
    }

    if(ehMaiuscula(x)){
        printf("\nEh maiuscula");
    }
    else {
        printf("\nNao eh maiuscula");
    }

    if(ehLetra(x)){
        printf("\nEh letra");
    }
    else{
        printf("\nNao eh letra");
    }

    if(ehConsoante(x)){
        printf("\nEh consoante");
    }
    else {
        printf("\nNao eh consoante");
    }

    if (ehAlgarismo(x)){
        printf("\nEh algarismo");
    }
    else {
        printf("\nNao eh algarismo");
    }

    return 0;
}
