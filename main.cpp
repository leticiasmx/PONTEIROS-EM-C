#include <stdio.h>

int main() {
    int cofrinho = 50; 
    int *ptr = &cofrinho;
    
    printf("O valor guardado no cofre do Joao e: %d\n", *ptr);
    printf("O endereco e: %p\n", ptr);
    
    return 0;
}