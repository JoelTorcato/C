#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Global scope (Reusable)

void getName(char *name) {
    printf("Enter your name: ");
    fgets(name, 50, stdin); // fgets inclui vereficação de limite de buffer, e o gets não
    name[strcspn(name, "\n")] = '\0'; // Usamos para evitar problemas com o \n no final
}

void printNameVertical(char *name) {
    for (int i = 0; name[i]; i++) { // O loop é executado até que o caractere atual seja '\0'
        // nome [i] = nome[i] != '\0'
        printf("%c\n", name[i]);
    }
}

void printNameHorizontalUppercase(char *name) {
    for (int i = 0; name[i]; i++) {
        printf("%c ", toupper(name[i])); // O toupper converte o carectere minúsculo em maiúsculo
    }
    printf("\n"); // Para ficar na horizontal (interesante)
}

void printWordReversed(char *word) {
    int length = strlen(word); // Serve para obter o tamanho da palavra
    printf("Your word in reverse: "); // Muito importante!
    for (int i = length - 1; i >= 0; i--) { 
        // Fazemos o loop de trás para a frente
        printf("%c", word[i]);
    }
    printf("\n");
}

// Até aqui (Organizar melhor os comentários)

int countVowels(char *word) {
    char vowels[] = "aeiouAEIOU";
    int count = 0;
    for (int i = 0; i < strlen(word); i++) {
        // 'i < palavra[i]' compara o índice i com o valor ASCII do caractere
        for (int j = 0; j < strlen(vowels); j++) {
            if (word[i] == vowels[j]) {
                count++;
            }
        }
    }
    return count;
}

int countA(char *phrase) {
    char aChars[] = "Aa";
    int count = 0;
    for (int i = 0; i < strlen(phrase); i++) {
        for (int j = 0; j < strlen(aChars); j++) {
            if (phrase[i] == aChars[j]) {
                count++;
            }
        }
    }
    return count;
}

void identifyOperator(char *phoneNumber) {
    switch (phoneNumber[0]) {
        case '0':
            printf("A sua operadora é a Vodafone\n");
            break;
        case '1':
            printf("A sua operadora é NOS\n");
            break;
        case '2':
            printf("A sua operadora é MEO\n");
            break;
        default:
            printf("Não tem operadora\n");
            break;
    }
}

// Local scope (Non-reusable)
int main() {
    char name[50];
    getName(name);

    printf("O seu nome possui %d caracteres\n", (int) strlen(name)); // '(int)strlen(nome)' = 'strlen(nome)'
    printNameVertical(name);
    printNameHorizontalUppercase(name);

    char word[100];
    printf("\nIntroduza uma palavra: ");
    scanf("%s", word);
    printWordReversed(word);

    char secondWord[100];
    printf("\nIntroduza a segunda palavra: ");
    scanf("%s", secondWord);

    int vowelCount = countVowels(secondWord); // Contamos as vogais da segunda palavra
    printf("A palavra informada possui %d vogais\n", vowelCount);

    char phrase[100];
    printf("\nInsira uma frase: ");
    scanf(" %[^\n]", phrase);

    int aCount = countA(phrase);
    printf("A palavra informada possui %d Aa\n", aCount);

    char phoneNumber[9];
    printf("Insira o seu número de telemóvel: ");
    scanf("%s", phoneNumber);
    identifyOperator(phoneNumber);

    return 0;
}
