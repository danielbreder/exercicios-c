#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int ehDivisivel(int a, int b){
    if(a % b == 0){
        return 1;
    }
    return 0;
}

int main() {
    int x;

    printf("Digite um numero: ");
    scanf("%d", &x);

    if(ehDivisivel(x, 2)){
        printf("Esse numero eh par");
    }
    else{
        printf("Esse numero eh impar");
    }

    return 0;
}