#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void forneceMMC(){

}

int main(){
    int n1, d1, n2, d2, nR, dR;

    FILE * arquivo = fopen("fracoes.txt", "r+");

    fscanf(arquivo, "%d / %d", &n1, &d1);
    fscanf(arquivo, "%d / %d", &n2, &d2);
    // puxa alguma funcao aqui//
    fprintf(arquivo, "\n%d / %d", n1, d1);

    fclose(arquivo);
    system("pause");
    return 0;
}