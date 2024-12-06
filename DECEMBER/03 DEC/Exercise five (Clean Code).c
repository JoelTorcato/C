#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Escopo global (Reutilizáveis)

void getNome(char *nome) {
    printf("Insira o seu nome: ");
    fgets(nome, 100, stdin); // fgets inclui vereficação de limite de buffer, e o gets não
    nome[strcspn(nome, "\n")] = '\0'; // Usamos para evitar problemas com o \n no final
}

void printNomeVertical(char *nome) {
    for (int i = 0; nome[i]; i++) {
        // nome [i] = nome[i] != '\0'
        printf("%c\n", nome[i]);
    }
}

void printNomeHorizontalUppercase(char *nome) {
    for (int i = 0; nome[i]; i++) {
        // Ver como funciona melhor o loop
        printf("%c ", toupper(nome[i]));
    }
    printf("\n");
}

void printPalavraReversa(char *palavra) {
    int len = strlen(palavra); // len de strlen
    printf("A sua palavra ao contrário: ");
    for (int i = len - 1; i >= 0; i--) {
        // Fazemos o loop de trás para a frente (Ver melhor 'int i = len - 1')
        printf("%c", palavra[i]);
    }
    printf("\n");
}

int contarVogais(char *palavra) {
    char vogais[] = "aeiouAEIOU";
    int contador = 0;
    for (int i = 0; i < strlen(palavra); i++) {
        // 'i < palavra[i]' compara o índice i com o valor ASCII do caractere
        for (int j = 0; j < strlen(vogais); j++) {
            if (palavra[i] == vogais[j]) {
                contador++;
            }
        }
    }
    return contador;
}

// Escopo local (Não reutilizáveis)

int main() {
    char nome[100];
    getNome(nome);

    printf("O seu nome possui %d caracteres\n", (int) strlen(nome)); // '(int)strlen(nome)' = 'strlen(nome)'
    printNomeVertical(nome);
    printNomeHorizontalUppercase(nome);

    char palavra[100];
    printf("\nIntroduza uma palavra: ");
    scanf("%s", palavra);
    printPalavraReversa(palavra);

    char segundaPalavra[100];
    printf("Insira uma palavra: ");
    scanf("%s", segundaPalavra);

    int numVogais = contarVogais(segundaPalavra); // Contamos as vogais da segunda palavra
    printf("\nA palavra informada possui %d vogais\n", numVogais);

    return 0;
}
