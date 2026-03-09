#include <stdio.h>

int mdcRec(int x, int y){
    if(y == 0){
        return x;
    }
    return mdcRec(y, x%y);
}

int mdcIte(int x, int y){
    int Y;
    while(y > 0){
        Y = y;
        y = x%y;
        x = Y;
    }
    return x;
}

void simplifica(int num, int den, int *simplificacaoNum, int *simplificacaoDen){
    *simplificacaoNum = num/mdcIte(num, den);
    *simplificacaoDen = den/mdcIte(num, den);
}

int main() {
    int num, den, simplificacaoNum, simplificacaoDen;

    printf("Digite um numero racional(numerador e denominador): ");
    scanf(" %d %d", &num, &den);

    while(den == 0){
        printf("Nao foi possivel fazer a simplificacao. Digite um valor diferente de zero no denominador: ");
        scanf(" %d", &den);
    }

    simplifica(num, den, &simplificacaoNum, &simplificacaoDen);
    printf("A simplificacao desse numero racional eh: %d/%d", simplificacaoNum, simplificacaoDen);
    
    return 0;
}