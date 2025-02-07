#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    char nome[50] = "JOSÉ SARAMAGO";
    char *ptr = nome;

    // Exibe o nome completo
    printf("Nome completo: ");
    while (*ptr != '\0') { 
        putchar(*ptr);
        ptr++;
    }
    printf("\n");

    ptr = nome;
    printf("Primeiro Nome: ");
    
    while (*ptr != ' ') {
        putchar(*ptr);
        ptr++;
    }
    printf("\n");

    ptr++;
    printf("Segundo Nome: ");
    
    while (*ptr != '\0') {
        putchar(*ptr);
        ptr++;
    }
    printf("\n");

    return 0;
}
