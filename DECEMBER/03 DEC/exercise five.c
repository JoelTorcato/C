#include <stdio.h>
#include <string.h>

int main() {
    /* Dado um nome introduzido pelo utilizador escreve no ecrã quantos caracteres tem o
    nome, apresenta o nome escrito na vertical e mostra o nome escrito na horizontal em
    maiúsculas */

    char frase[100];
    int nomeTamanho;

    printf("Insira o seu nome: ");
    scanf("%d", &nomeTamanho);
    gets(frase);

    nomeTamanho = strlen(frase);

    printf("O seu nome possui %d caracteres\n", nomeTamanho);

    for (int i = 0; i < frase[i]; i++) {
        if (frase[i] == '\0');
        printf("%c\n", frase[i]);
    }
    for (int i = 0; i < frase[i]; i++) {
        if (frase[i] == '\0');
        printf("%c ", frase[i]);
    }

    char palavra[100];

    printf("\nIntroduza uma palavra: ");
    scanf("%s", palavra);

    printf("A sua palavra ao contrário: %s\n", strrev(palavra));


    char segundaPalavra[100];
    char vogais[2] = "aeiouAEIOU"; // Adicionar para maiúsculas também
    int contador = 0;

    printf("Insira uma palavra: ");
    scanf("%s", segundaPalavra);
    // gets(segundaPalavra); Erro!


    for (int i = 0; i < strlen(segundaPalavra); i++) { // Contar o número de carateres que a palavra tem
        for (int j = 0; j < strlen(vogais); j++) { // Contar o número de vogais
            if (segundaPalavra[i] == vogais[j]) {
                contador++;
            }
        }
    }
    printf("\nA palavra informada possui %d vogais\n", contador);

    return 0;

} // Continuar o exercício
