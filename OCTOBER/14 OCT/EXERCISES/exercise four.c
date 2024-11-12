#include <stdio.h>

int main() {
    int numeros[5];
    int pares[5];
    int impares[5];
    int i, p = 0, im = 0;

    printf("insira 5 numeros inteiros: \n");
    for (i = 0; i < 5; i++) {
        printf("numero %d: ", i + 1);
        scanf("%d", &numeros[i]);

        if (numeros[i] % 2 == 0) {
            pares[p++] = numeros[i];
        } else {
            impares[im++] = numeros[i];
        }
    }


    printf("\nvetor original: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", numeros[i]);
    }

    printf("\n vetor de pares: ");
    for (i = 0; i < p; i++) {
        printf("%d ", pares[i]);
    }

    printf("\nvetor de impares: ");
    for (i = 0; i < im; i++) {
        printf("%d ", impares[i]);
    }


    return 0;
}