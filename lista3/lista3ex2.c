#include <stdio.h>
#include <math.h>

void calculaAdicao(int nX, int nY, int dX, int dY, int *num, int *den) {
    *num = nX*dY+nY*dX;
    *den = dX*dY;
}

void calculaSubtracao(int nX, int nY, int dX, int dY, int *num, int *den) {
    *num = nX*dY-nY*dX;
    *den = dX*dY;
}

void calculaMultiplicacao(int nX, int nY, int dX, int dY, int *num, int *den){
    *num = nX*nY;
    *den = dX*dY;
}

void calculaDivisao(int nX, int nY, int dX, int dY, int *num, int *den){
    *num = nX*dY;
    *den = dX*nY;
}

int main () {
    int nX, nY, dX, dY, num, den;

    printf("Digite o numerador da primeira fracao: ");
    scanf("%d", &nX);
    printf("Digite o denominador da primeira fracao: ");
    scanf("%d", &dX);
    printf("Digite o numerador da segunda fracao: ");
    scanf("%d", &nY);
    printf("Digite o denominador da segunda fracao: ");
    scanf("%d", &dY);

    calculaAdicao(nX, nY, dX, dY, &num, &den);
    printf("Quando somamos essas duas fracoes o numerador eh: %d\n", num);
    printf("Quando somamos essas duas fracoes o denominador eh: %d\n", den);

    calculaSubtracao(nX, nY, dX, dY, &num, &den);
    printf("\nQuando subtraimos essas duas fracoes o numerador eh: %d\n", num);
    printf("Quando subtraimos essas duas fracoes o denominador eh: %d\n", den);

    calculaMultiplicacao(nX, nY, dX, dY, &num, &den);
    printf("\nQuando multiplicamos essas duas fracoes o numerador eh: %d\n", num);
    printf("Quando multiplicamos essas duas fracoes o denominador eh: %d\n", den);

    calculaDivisao(nX, nY, dX, dY, &num, &den);
    printf("\nQuando dividimos o numerador eh: %d\n", num);
    printf("Quando dividimos o denominador eh: %d\n", den);

    return 0;
}