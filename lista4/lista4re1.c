#include <stdio.h>

int ehVogal(char x) {
    if(x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' || x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U ') {
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
    if(x >= 'A' && x<='Z') {
        return 1;
    }
    return 0;
}

int ehLetra(char x) {
    if(ehMinuscula(x) || ehMaiuscula(x)) {
        return 1;
    }
    return 0;
}

int ehConsoante(char x) {
    if((ehLetra(x)) && (!ehVogal(x))){
        return 1;
    }
    return 0;
}

int ehAlgarismo(char x) {
    if(x >= '0' && x <= '9'){
        return 1;
    }
    return 0;
}

int main() {
    char x;

    printf("Digite um caractere: ");
    scanf("%c", &x);
    
    if(ehVogal(x)){
        printf("Eh vogal");
    }
    else{
        printf("Nao eh vogal");
    }

    if(ehMinuscula(x)){
        printf("\neh minuscula");
    }
    else{
        printf("\nNao eh minuscula");
    }
    
    if(ehMaiuscula(x)){
        printf("\neh maiuscula");
    }
    else{
        printf("\nNao eh maiuscula");
    }

    if(ehLetra(x)){
        printf("\neh uma letra");
    }
    else{
        printf("\nNao eh uma letra");
    }

    if(ehConsoante(x)){
        printf("\neh uma consoante");
    }
    else{
        printf("\nNao eh consoante");
    }

    if(ehAlgarismo(x)){
        printf("\neh algarisdmo");
    }
    else{
        printf("\nNao eh algarismo");
    }

    return 0;
}