#include <stdio.h>
#include <locale.h>

// Function prototype
long int factorial(int n);

int main() {
    // Set locale to Portuguese
    setlocale(LC_ALL, "portuguese");

    int n;

    // Prompt user for input
    printf("Enter the number you want to know the factorial of\t");
    scanf("%d", &n);

    // Display the result
    printf("O valor de %d! = %ld", n, factorial(n));

    return 0;
}

// Recursive function to calculate factorial
long int factorial(int x) {
    if (x == 1)
        return 1;
    else
        return (x * factorial(x - 1));
}
