#include <stdio.h>

int main() {

    /* Fazer um programa em "C" que solicite 2 n?meros e informe:
    a) A soma dos n?meros; Feito
    b) O produto do primeiro n?mero pelo quadrado do segundo;
    c) O quadrado do primeiro n?mero;
    d) A raiz quadrada da soma dos quadrados;
    e) O seno da diferen?a do primeiro n?mero pelo segundo;
    f) O m?dulo do primeiro n?mero. */

    float primeiroNumero = 0;
    float segundoNumero = 0;

    printf("Primeiro n?mero: ");
    scanf("%f", &primeiroNumero);

    printf("Segundo n?mero: ");
    scanf("%f", &segundoNumero);

    float soma = primeiroNumero + segundoNumero;

    printf("%.2f + %.2f =  %.2f", primeiroNumero, segundoNumero, soma);
}