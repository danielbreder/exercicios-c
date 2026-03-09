#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

char* divisivel(int x, int y){
    if(x % y == 0){
        return("O primeiro parametro eh divisivel pelo segundo");
    }
    else{
        return "Eles nao sao divisiveis";
    }
}

int main (){
    int x, y;

    printf("Digite dois numeros: ");
    scanf("%d %d", &x, &y);

    if(x%2 == 0 && y%2 != 0){
        printf("%s\n", divisivel(x, y));

        printf("x eh par e y eh impar");
    }
    else if(x%2 != 0 && y%2 == 0){
        printf("%s\n", divisivel(x, y));

        printf("x eh impar e y eh par");
    }
    else if(x%2 == 0 && y%2 == 0){
        printf("%s\n", divisivel(x, y));

        printf("x eh par e y eh par");
    }
    else{
        printf("%s\n", divisivel(x, y));

        printf("x eh impar e y eh impar");
    }

    return 0;
}