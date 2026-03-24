#include <stdio.h>
#include <math.h>

int ehTriangulo(float x, float y, float z) {
    if((x < y + z) && (y < x + z) && (z < y + x)) {
        return 1;
    }
    return 0;
}

int defineTriangulo(float x, float y, float z) {
    if(x == y && y == z) {
        return 3;
    }
    else if(x == y || x == z || y == z) {
        return 2;
    }
    else if(x != y && y != z && x != z) {
        return 1;
    }
    else {
        return 0;
    }
}

main() {
    float a, b, c;

    printf("Forneca tres valores: ");
    scanf("%f %f %f", &a, &b, &c);

    if(defineTriangulo(a, b, c)==3) {
        printf("Eh triangulo equilatero");
    }
    else if(defineTriangulo(a, b, c)==2) {
        printf("Eh triangulo isosceles");
    }
    else if(defineTriangulo(a, b, c)==1) {
        printf("Eh triangulo escaleno");
    }
    else {
        printf("Nao eh triangulo");
    }

    return 0;
}