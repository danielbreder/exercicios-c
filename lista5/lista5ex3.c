#include <stdio.h>
#include <stdlib.h>

int ehPrimo(int n) {
    int primo = 0;
    if(n > 2 && n%2!=0){
        primo = 1;
    }
    else if(n == 2){
        primo = 1;   
    }
    return primo;
} // ta errado

int main() {
    int n;
    
    printf("Digite um numero: ");
    scanf("%d", &n);

    if(ehPrimo(n)){
        printf("Esse numero eh primo");
    }
    else {
        printf("Esse numero nao eh primo");
    }

    return 0;
}