#include <stdio.h>

void printBinary(int n) {
    for (int i = 31; i >= 0; i--) { // Serves to print the binary representation of an integer.
        printf("%d", (n >> i) & 1);
    }
    printf("\n");
}

int main() {
    int numero, bit, posicao;

    printf("Insira um número decimal: ");
    scanf("%d", &numero);

    printf("Binário: ");
    printBinary(numero);
    printf("Octal: %o\n", numero);
    printf("Hexadecimal: %x\n", numero);

    printf("Insira a posição do bit a ser modificado (0-31): ");
    scanf("%d", &posicao);

    printf("Insira o valor do bit (0 ou 1): ");
    scanf("%d", &bit);

    if (bit == 1) {
        numero |= (1 << posicao); // Shifts bit 1 to the left by the number of positions specified per position.
    } else {
        numero &= ~(1 << posicao); 
    }

    printf("Novo valor em binário: ");
    printBinary(numero);
    printf("Novo valor em octal: %o\n", numero);
    printf("Novo valor em hexadecimal: %x\n", numero);

    return 0;

    // I used github copilot to help me.
}