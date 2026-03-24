int main() {
    int var = 37;
    int *ptr;

    ptr = &var;

    printf("Valor da variavel eh: %d\n", var);
    printf("Endereço da variavel eh: %p\n", &var);
    printf("Valor apontado pelo ponteiro eh: %d\n", *ptr) ;
    printf("Endereço apontado pelo ponteiro eh: %p\n", ptr);
    printf("Endereço do ponteiro eh: %p\n", &ptr);

    
    return 0;
}