#include <stdio.h>

int main(void) {
    FILE *file;
    file = fopen("teste.txt", "w");
    fprintf(file, "Boa tarde!!");
    fclose(file);

    return 0;
}