int main() {
    int var = 25;
    int *ptr;

    ptr = &var;

    printf("O valor da variavel eh: %d\n", var);
    printf("O endereço da variavel eh: %p\n", &var);
    printf("O valor apontado pelo ponteiro é: %d\n", *ptr);
    printf("O endereço apontado pelo ponteiro é: %p\n", ptr);
    printf("O endereço do ponteiro é: %p\n", &ptr);

    
    return 0;
}