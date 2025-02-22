#include <stdio.h>

#define TAXA_IVA 0.23
#define MAIOR(a, b) ((a) > (b) ? (a) : (b)) // Macro to return the greater of two numbers
#define BEM_VINDO(nome) printf("Welcome, %s!\n", nome)

int main() {
    float preco, preco_final; 
    int num1, num2;
    char nome[50]; 

    // Exercício one
    printf("Enter the price: "); 
    scanf("%f", &preco);

    preco_final = preco + (preco * TAXA_IVA); // Calculate the final price by adding VAT

    printf("Final price with VAT: %.2f\n", preco_final);

    // Exercício two
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("The greater number is: %d\n", MAIOR(num1, num2)); // Use the GREATEST macro to find and print the largest number

    // Exercício three
    printf("Enter your name: ");
    scanf("%s", nome); 
    BEM_VINDO(nome); // Use the WELCOME macro to print a personalized welcome message
    return 0;

    // Github Copilot helped me fix some bugs
}