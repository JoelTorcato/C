#include <stdio.h>

int main() {
    // Fazer um programa que solicita um número decimal e imprime o correspondente em hexa e octal. (https://www.quora.com/How-can-I-convert-decimals-to-octals-and-hexadecimals-in-C-programming)

    int n = 0;

    printf("Valor decimal = ");
    scanf("%d", &n);

    printf("\nValor octal = %o", n);
    printf("\nValor hexadecimal = %x", n);
}