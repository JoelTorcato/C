#include <stdio.h>
#include "config.h" // Include the header file with the version constant

// Exercício one
#define TAXA 0.21

int main() {
    printf("Tax value: %.2f\n", TAXA);

    // Remove the RATE macro
    #undef TAXA

    // Try to print the removed macro (may cause error)
    // printf("Tax value after undef: %.2f\n", TAXA); // Esta linha causará erro de compilação

    // Exercício two
    #define MODO 1

    #if MODO == 1
        printf("Modo Normal\n");
    #elif MODO == 2
        printf("Modo Avançado\n");
    #else
        printf("Modo Desconhecido\n");
    #endif

    printf("Version: %s\n", VERSAO);

    return 0;

    // Github copilot helped me build the website
}