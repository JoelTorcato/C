#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Global scope (Reusable)

// 1.
void getName(char *name) {
    printf("Enter your name: ");
    fgets(name, 100, stdin); // fgets inclui verificação de limite de buffer, e o gets não
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
    int lengthWord = strlen(word); // Serve para obter o tamanho da palavra
    printf("Your word in reverse: ");
    for (int i = lengthWord - 1; i >= 0; i--) {  // O loop é executado de trás para a frente
        printf("%c", word[i]);
    }
    printf("\n");
}

// 3.
int countVowels(char *word) {
    char vowels[] = "aeiouAEIOU";
    int count = 0;
    for (int i = 0; i < strlen(word); i++) { // Vê todos os caracteres da palavra
        for (int j = 0; j < strlen(vowels); j++) { // Vê todas as vogais da variável vowels
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
    switch (phoneNumber[0]) { // phoneNumber[0] verifica o primeiro caractere do número
        case '0':
            printf("Your operator is Vodafone\n");
            break;
        case '1':
            printf("Your operator is NOS\n");
            break;
        case '2':
            printf("Your operator is MEO\n");
            break;
        default:
            printf("No operator\n");
            break;
    }
}

// 6. (Erro)
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
    formatNames();
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
void reverseString(char *str) { // str = string
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) { // Percorre metade da string
        char temp = str[i]; // temp = temporária
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

void checkPalindrome(char *word) {
    char reversedWord[100];
    strcpy(reversedWord, word);
    reverseString(reversedWord);

    if (strcmp(word, reversedWord) == 0) { // Se forem iguais
        printf("The word is capicua\n");
    } else {
        printf("The word is not capicua\n");
    }
}

int main() {
    // 1.
    char name[100];
    getName(name);

    printf("Your name has %d characters\n", (int) strlen(name));
    printNameVertical(name);
    printNameHorizontalUppercase(name);

    // 2.
    char word[100];
    printf("\nEnter a word: ");
    scanf("%s", word);
    printWordReversed(word);

    // 3.
    char secondWord[100];
    printf("\nEnter the second word: ");
    scanf("%s", secondWord);

    int vowelCount = countVowels(secondWord);
    printf("The given word has %d vowels\n", vowelCount);

    // 4.
    char phrase[100];
    char characters[100];

    printf("\nInsert a sentence: ");
    scanf(" %[^\n]", phrase);

    printf("Insert characters to count: ");
    scanf(" %[^\n]", characters);

    int count = countCharacterOccurrences(phrase, characters);
    printf("The given sentence has %d occurrences of '%s'\n", count, characters);

    // 5.
    char phoneNumber[9];
    printf("Enter your mobile number: ");
    scanf("%s", phoneNumber);
    identifyOperator(phoneNumber);

    // 6. (Erro)
    formatNames();
    printf("Program terminated.\n");

    // 7.
    char phraseWithDigits[100];
    printf("\nInsert a sentence: ");
    scanf(" %[^\n]", phraseWithDigits); // %[^\n] lê a string até encontrar um \n

    int digitCount = countDigitsInPhrase(phraseWithDigits);
    printf("The sentence has %d number(s)\n", digitCount);

    // 8.
    char palindromeWord[100];
    printf("\nEnter a word to check if it is capicua: ");
    scanf("%s", palindromeWord);
    checkPalindrome(palindromeWord);

    return 0;
}