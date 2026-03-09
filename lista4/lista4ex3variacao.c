#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

int divisivel(int x, int y){
    if(x % y == 0){
        return 1;
    }
    return 0;
}

int main(){
    int x;

    printf("Digite um numero: ");
    scanf("%d", &x);

    if(divisivel(x, 2)){
        printf("Esse numero eh par");
    }
    else {
        printf("Esse numero eh impar");
    }

    return 0;
}