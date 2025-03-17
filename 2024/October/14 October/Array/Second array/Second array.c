#include <stdio.h>

int main() {
    // Initialize an empty array of 4 integers
    int numeros[4] = {};
    int i;

    // Loop to get user input for positions 1-3
    for (i = 1; i <= 3; i++) {
        printf("Introduza um numero inteiro para a posicao %d\n", i);
        scanf("%d", &numeros[i]);
    }

    // Print a separator between input and output
    printf("\n\n");

    // Loop to display the entered values
    for (i = 1; i <= 3; i++) {
        printf("%d\n", numeros[i]);
    }

    return 0; // Added return statement
}