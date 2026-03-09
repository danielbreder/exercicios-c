#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int ehTriangulo(float x, float y, float z){
    float ehLado = 0;
    if(x<y+z && y<x+z && z<x+y){
        ehLado = 1;
        return ehLado;
    }
    return ehLado;
}

int defineTriangulo(float x, float y, float z){
    float equilatero, isosceles, escaleno, naoEhTriangulo;
    if(x >= y + z || y >= x + z || z >= x + y){
        naoEhTriangulo = 0;
        return naoEhTriangulo;
    }
    else if(x==y && y==z){
        equilatero = 3;
        return equilatero;
    }
    else if((x==y && z!=x) || (x==z && y!=x) || (y==z && x!=y)){
        isosceles = 2;
        return isosceles;
    }
    else if(x != y && x != z && y != z){
        escaleno = 1;
        return escaleno;
    }
    return 0;
}

int main() {
    float valor1, valor2, valor3;

    printf("Forneça tre valores: ");
    scanf("%f %f %f", &valor1, &valor2, &valor3);

    if(ehTriangulo(valor1, valor2, valor3) == 0){
        printf("%s\n", "Nao eh triangulo!!");
    }
    else if(ehTriangulo(valor1, valor2, valor3) == 1 && defineTriangulo(valor1, valor2, valor3) == 3){
        printf("%s\n", "Eh equilatero");
    }
    else if((ehTriangulo(valor1, valor2, valor3) == 1 && defineTriangulo(valor1, valor2, valor3) == 2)){
        printf("%s\n", "Eh isosceles");
    }
    else{
        printf("%s\n", "Eh escaleno");
    }
}