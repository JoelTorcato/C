#include <stdio.h>

int main() {
    int numbers[6], total = 0;
    float average;
    int maximum, minimum;

    // a) Input: Read 6 numbers into the array
    printf("Enter 6 numbers:\n");
    for (int i = 0; i < 6; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // b) Output: Display array horizontally
    printf("\nArray in horizontal format:\n");
    for (int i = 0; i < 6; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    // c) Output: Display array vertically
    printf("\nArray in vertical format:\n");
    for (int i = 0; i < 6; i++) {
        printf("%d\n", numbers[i]);
    }

    // d) Output: Display array in reverse order
    printf("\nArray in reverse order:\n");
    for (int i = 5; i >= 0; i--) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    // e) Calculate and display sum and average
    for (int i = 0; i < 6; i++) {
        total += numbers[i];
    }
    average = total / 6.0;  // Using float division for decimal precision

    printf("\nSum of values: %d\n", total);
    printf("Average of values: %.2f\n", average);  // Displaying with 2 decimal places

    // f) Find and display maximum and minimum values
    maximum = minimum = numbers[0];  // Initialize with the first element
    for (int i = 1; i < 6; i++) {
        if (numbers[i] > maximum) maximum = numbers[i];
        if (numbers[i] < minimum) minimum = numbers[i];
    }

    printf("Maximum value: %d\n", maximum);
    printf("Minimum value: %d\n", minimum);

    return 0;
}