#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Global scope (Reusable)

// 1.
void getName(char *name) {
    printf("Enter your name: ");
    fgets(name, 100, stdin); // fgets inclui vereficação de limite de buffer, e o gets não
    name[strcspn(name, "\n")] = '\0'; // Usamos para evitar problemas com o \n no final
}

void printNameVertical(char *name) {
    for (int i = 0; name[i]; i++) { // O loop é executado até que o caractere atual seja '\0'
        printf("%c\n", name[i]);
    }
}

void printNameHorizontalUppercase(char *name) {
    for (int i = 0; name[i]; i++) {
        printf("%c ", toupper(name[i])); // O toupper converte o carectere minúsculo em maiúsculo
    }
    printf("\n");
}

// 2.
void printWordReversed(char *word) {
    int length = strlen(word); // Serve para obter o tamanho da palavra
    printf("Your word in reverse: ");
    for (int i = length - 1; i >= 0; i--) { 
        printf("%c", word[i]);
    }
    printf("\n");
}

// 3.
int countVowels(char *word) {
    char vowels[] = "aeiouAEIOU";
    int count = 0;
    for (int i = 0; i < strlen(word); i++) {
        for (int j = 0; j < strlen(vowels); j++) {
            if (word[i] == vowels[j]) {
                count++;
            }
        }
    }
    return count;
}

// 4.
int countCharacterOccurrences(char *phrase, char *characters) {
    int count = 0;
    for (int i = 0; i < strlen(phrase); i++) {
        for (int j = 0; j < strlen(characters); j++) {
            if (phrase[i] == characters[j]) {
                count++;
            }
        }
    }
    return count;
}

// 5.
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

// 6.
void formatNames() {
    char firstName[50], lastName[50];
    while (1) {
        printf("Enter your first name (or press Enter to quit): ");
        if (fgets(firstName, sizeof(firstName), stdin) == NULL) {
            printf("Error reading first name.\n");
            break;
        }
        firstName[strcspn(firstName, "\n")] = '\0';  // Remove the newline character

        if (strlen(firstName) == 0) break;  // Exit the loop if the input is empty

        printf("Enter your last name: ");
        if (fgets(lastName, sizeof(lastName), stdin) == NULL) {
            printf("Error reading last name.\n");
            break;
        }
        lastName[strcspn(lastName, "\n")] = '\0';  // Remove the newline character

        printf("Formatted: %s, %s\n", lastName, firstName);
    }
}

// 7.
int countDigitsInPhrase(char *phrase) {
    int digits = 0;
    for (int i = 0; i < strlen(phrase); i++) {
        if (phrase[i] >= '0' && phrase[i] <= '9') {
            digits++;
        }
    }
    return digits;
}

// 8.
void reverseString(char *str) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

void checkPalindrome(char *word) {
    char reversedWord[100];
    strcpy(reversedWord, word);
    reverseString(reversedWord);

    if (strcmp(word, reversedWord) == 0) {
        printf("A palavra é capicua\n");
    } else {
        printf("A palavra não é capicua\n");
    }
}

int main() {
    char name[100];
    getName(name);

    printf("O seu nome possui %d caracteres\n", (int) strlen(name));
    printNameVertical(name);
    printNameHorizontalUppercase(name);

    char word[100];
    printf("\nIntroduza uma palavra: ");
    scanf("%s", word);
    printWordReversed(word);

    char secondWord[100];
    printf("\nIntroduza a segunda palavra: ");
    scanf("%s", secondWord);

    int vowelCount = countVowels(secondWord);
    printf("A palavra informada possui %d vogais\n", vowelCount);

    char phrase[100];
    printf("\nInsira uma frase: ");
    scanf(" %[^\n]", phrase);

    int aCount = countCharacterOccurrences(phrase, "Aa");
    printf("A palavra informada possui %d Aa\n", aCount);

    char phoneNumber[9];
    printf("Insira o seu número de telemóvel: ");
    scanf("%s", phoneNumber);
    identifyOperator(phoneNumber);

    formatNames();

    printf("Program terminated.\n");

    char phraseWithDigits[100];
    printf("\nInsira uma frase:");
    scanf(" %[^\n]", phraseWithDigits);

    int digitCount = countDigitsInPhrase(phraseWithDigits);
    printf("A frase possui %d numero(s) \n", digitCount);

    char palindromeWord[100];
    printf("\nInsira uma palavra para verificar se é capicua: ");
    scanf("%s", palindromeWord);
    checkPalindrome(palindromeWord);

    return 0;
}