#include <stdio.h>

int main() {
  // Fazer um programa em C que pergunta um valor em metros e imprime o correspondente em decímetros, centímetros e milímetros.

  int numero = 0;

  printf("Escreva um valor em metros: ");
  scanf("%d", &numero);

  printf("O valor em decímetros: %d\n", numero * 10);
  printf("O valor em centímetros: %d\n", numero * 100);
  printf("O valor em milímetros: %d\n", numero * 1000);
}
