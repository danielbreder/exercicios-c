#include <stdio.h>
#include <math.h>

float resultadoOperacao(float x, float y, char operador){
    if(operador == '+'){
        return x+y;
    }
    else if(operador == '-'){
        return x-y;
    }
    else if(operador == '*' || operador == 'x' || operador == 'X'){
        return x*y;
    }
    else if(operador == '/' || operador == ':'){
        return x/y;
    }
    return 0;
}

int main() {
    float x, y;
    char oper;

    printf("Digite dois numeros: ");
    scanf("%f %f", &x, &y);

    printf("Digite qual operador voce quer usar nessa expressao(+, -, *, x, X, /, :): ");
    scanf(" %c", &oper);

    printf("%.2f %c %.2f = %.2f\n", x, oper, y, resultadoOperacao(x, y, oper));

    return 0;
}