#include <stdio.h>

int main() {

    /* Fazer um programa em "C" que solicite 2 números e informe:
    a) A soma dos números;
    b) O produto do primeiro número pelo quadrado do segundo;
    c) O quadrado do primeiro número;
    d) A raiz quadrada da soma dos quadrados;
    e) O seno da diferença do primeiro número pelo segundo;
    f) O módulo do primeiro número. */

    float primeiroNumero = 0;
    float segundoNumero = 0;

    printf("Insira dois números: ");
    scanf("%d", &primeiroNumero, &segundoNumero);
    printf("A soma: %f", primeiroNumero + segundoNumero);
}