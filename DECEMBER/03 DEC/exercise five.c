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
        printf("%c", frase[i]);
    }

}