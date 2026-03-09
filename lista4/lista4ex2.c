#include <stdio.h>
#include <math.h>

float comportaFabs(float x) {
    if(x<0){
      return x*(-1);  
    }
    else{
        return x;
    }
}

int main() {
    float x;

    printf("Digite um numero: ");
    scanf("%f", &x);

    printf("\n %.2f\n", comportaFabs(x));

    return 0;
}