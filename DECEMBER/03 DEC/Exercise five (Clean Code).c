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

// 2.
void printWordReversed(char *word) {
    int length = strlen(word); // Serve para obter o tamanho da palavra
    printf("Your word in reverse: "); // Muito importante!
    for (int i = length - 1; i >= 0; i--) { 
        // Fazemos o loop de trás para a frente
        printf("%c", word[i]);
    }
    printf("\n");
}

// 3.
int countVowels(char *word) {
    char vowels[] = "aeiouAEIOU";
    int count = 0;
    for (int i = 0; i < strlen(word); i++) { // Vê cada caractere da palavra (Forma simples)
        for (int j = 0; j < strlen(vowels); j++) { // vowels = filho
            if (word[i] == vowels[j]) {
                count++;
            }
        }
    }
    return count;
}

// 4.
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

// 5.
void identifyOperator(char *phoneNumber) {
    switch (phoneNumber[0]) { // Uso phoneNumber[0] para obter o primeiro caractere
        case '0': // case = if
            printf("A sua operadora é a Vodafone\n");
            break;
        case '1':
            printf("A sua operadora é NOS\n");
            break;
        case '2':
            printf("A sua operadora é MEO\n");
            break;
        default: // default = else
            printf("Não tem operadora\n");
            break;
    }
}
// 7.

    int numeroDigitosFrases(char *frase) {
        char nChars[] = "0123456789";
        int digitos = 0;
        for (int i = 0; i < strlen(frase); i++) {
            if (frase[i] >= '0' && frase[i] <= '9') { // Verifica se o caractere é um número
                digitos++;
            }
        }
        return digitos;
    }

// Local scope (Non-reusable)
int main() {
    char name[100];
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

    printf("Program terminated.\n"); 

    char frase[100];
    printf("\nInsira uma frase:");
    scanf(" %[^\n]", frase); // Ver

    int Numerodigitos = numeroDigitosFrases(frase);
    printf("A frase possui %d numero(s) \n", Numerodigitos);

    return 0;
}
