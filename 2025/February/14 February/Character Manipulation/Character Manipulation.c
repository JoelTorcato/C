#include <stdio.h>

int main() {
    char c = 'A';

    printf("Caractere: %c\n", c);
    printf("Valor Decimal: %d\n", c);
    printf("Valor Hexadecimal: 0x%X\n", c);
    printf("Valor Binário: 01000001\n");

    // Modificar diretamente o bit menos significativo
    c |= 1; // Torna 'A' (65) em 67 ('C')

    printf("Novo Caractere: %c\n", c);
    printf("Novo Valor Decimal: %d\n", c);
}