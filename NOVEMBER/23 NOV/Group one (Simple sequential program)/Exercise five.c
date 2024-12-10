#include <stdio.h>

int main() {

    /* Fazer um programa em "C" que solicite 2 numeros e informe:
    a) A soma dos numeros; Feito
    b) O produto do primeiro numero pelo quadrado do segundo; Feito
    c) O quadrado do primeiro numero; Feito
    d) A raiz quadrada da soma dos quadrados;
    e) O seno da diferenua do primeiro numero pelo segundo;
    f) O mudulo do primeiro numero. */

    float primeiroNumero = 0;
    float segundoNumero = 0;

    printf("Primeiro numero: ");
    scanf("%f", &primeiroNumero);

    printf("Segundo numero: ");
    scanf("%f", &segundoNumero);

    float soma = primeiroNumero + segundoNumero;

    printf("%.2f + %.2f =  %.2f\n", primeiroNumero, segundoNumero, soma);

    float segundoNumeroQuadrado = segundoNumero * segundoNumero;
    float produtoAoQuadrado = primeiroNumero * segundoNumeroQuadrado;
    float primeiroNumeroQuadrado = primeiroNumero * primeiroNumero;

    printf("%2.f * %.2f (o segundo numero está elevado ao quadrado)  = %2.f\n", primeiroNumero, segundoNumeroQuadrado,
           produtoAoQuadrado);
    printf("O primeiro numero ao quadrado é: %.2f\n", primeiroNumeroQuadrado);

    return 0;
}