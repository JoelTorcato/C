#include <stdio.h>
#include "operacoes.h" // Include the header file with the operation functions

#define MAIOR(a, b) ((a) > (b) ? (a) : (b)) // Macro to return the greater of two numbers

// Function to return the greater of two numbers
int maior(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int num1, num2;

    // Exercise one
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("The greater number using macro is: %d\n", MAIOR(num1, num2));

    // Exercise two
    printf("The greater number using function is: %d\n", maior(num1, num2));

    // Exercise three
    printf("Sum: %d\n", soma(num1, num2));
    printf("Subtraction: %d\n", subtracao(num1, num2));
    printf("Multiplication: %d\n", multiplicacao(num1, num2));

    return 0;
}