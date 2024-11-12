#include <stdio.h>

int main() {
    int numeros[4] = {};
    int i;

    for (i = 1; i <= 3; i++) {
        printf("introduza um numero inteiro para a posicao %d\n", i);
        scanf("%d", &numeros[i]);
    }
    printf("\n\n");
    for (i = 1; i <= 3; i++) {
        printf("%d\n", numeros[i]);
    }
}