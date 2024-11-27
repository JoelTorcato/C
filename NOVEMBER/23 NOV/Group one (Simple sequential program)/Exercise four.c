#include <stdio.h>

int main() {
  /* . Fazer um programa em "C" que pergunte um valor em graus Fahrenheit e imprime no vídeo o correspondente em graus Celsius usando as fórmulas que seguem.

  a) Usar uma variável double para ler o valor em Fahrenheit e a fórmula C=(f-32.0) * (5.0/9.0).
  b) Usar uma variável int para ler o valor em Fahrenheit e a fórmula C=(f-32)*(5/9) */

  float grausFahrenheit = 0;

  printf("graus Fahrenheit: ");
  scanf("%f", &grausFahrenheit);
  float grausCelcius = (grausFahrenheit - 32.0) * (5.0 / 9.0); // Prestar mais anteção ao enunciado

  printf("graus Celcius: %.2f", grausCelcius);
}

