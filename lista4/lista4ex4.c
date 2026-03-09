#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

float maiorNumero(float x, float y){
    float maior = y;
    if(x>y){
       maior = x;
       return maior; 
    }
    return maior;
}

float maiorDos3(float x, float y, float z){
    float maior = maiorNumero(x, y);
    if(z>maiorNumero(x, y)){
        maior = z;
        return maior;
    }
    return maior;
}

int main(){
    float x, y, z, maior;

    printf("Digite 3 numeros: ");
    scanf("%f %f %f", &x, &y, &z);

    maior = maiorDos3(x, y, z);
    printf("O maior entre eles eh: %.2f\n", maior);

    return 0;
}