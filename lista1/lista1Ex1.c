#include <stdio.h>

void teste (char* texto) {
    printf("%s\n", texto);
}

int main() {
    char* texto;
    
    texto = (char*)malloc(sizeof(char) *100);

    scanf("\n");

    gets(texto);
    teste(texto);
    free(texto);

    return 0;
}