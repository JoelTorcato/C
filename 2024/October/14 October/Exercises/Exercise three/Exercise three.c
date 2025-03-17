#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h> // Added for toupper() function

int main() {
    // Task 1: Temperature Analysis
    float temperatures[7];
    float max_temp, min_temp;

    // Reading temperatures
    printf("Task 1: Enter the daily temperatures in Loures for the last week:\n");
    for (int i = 0; i < 7; i++) {
        printf("Day %d: ", i + 1);
        scanf("%f", &temperatures[i]);
    }

    // Initialize max_temp and min_temp
    // Note: There's a bug in the original code - should start with index 0, not 1
    max_temp = min_temp = temperatures[0];

    // Calculate maximum and minimum temperatures
    for (int i = 1; i < 7; i++) {
        if (temperatures[i] > max_temp) max_temp = temperatures[i];
        if (temperatures[i] < min_temp) min_temp = temperatures[i];
    }

    // Display the temperature range
    printf("Temperature range: %.2f\n\n", max_temp - min_temp); // %.2f to round to 2 decimal places

    // Task 2: Positive and Negative Numbers
    int numbers[10], positives[10], negatives[10];
    int pos_count = 0, neg_count = 0;

    // Reading numbers
    printf("Task 2: Enter 10 integer numbers:\n");
    for (int i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
        if (numbers[i] >= 0) {
            positives[pos_count++] = numbers[i]; // Store positive numbers
        } else {
            negatives[neg_count++] = numbers[i]; // Store negative numbers
        }
    }

    // Display arrays
    printf("Numbers: ");
    for (int i = 0; i < 10; i++) printf("%d ", numbers[i]);
    printf("\nPositive numbers: ");
    for (int i = 0; i < pos_count; i++) printf("%d ", positives[i]);
    printf("\nNegative numbers: ");
    for (int i = 0; i < neg_count; i++) printf("%d ", negatives[i]);
    printf("\n\n");

    // Task 3: Dice Simulation
    int random_numbers[50];
    int count1, count2, count3, count4, count5, count6, i;
    char response;

    do {
        system("cls"); // Clear screen (Note: this is system-dependent)
        srand(time(NULL)); // Seed random number generator

        // Reset counters
        count1 = 0;
        count2 = 0;
        count3 = 0;
        count4 = 0;
        count5 = 0;
        count6 = 0;

        // Generate 49 random numbers between 1-6
        for (i = 0; i < 49; i++) {
            random_numbers[i] = rand() % 6 + 1;

            // Count occurrences of each number
            switch(random_numbers[i]) {
                case 1: count1++; break;
                case 2: count2++; break;
                case 3: count3++; break; // Fixed: original code missed counting 3s
                case 4: count4++; break;
                case 5: count5++; break;
                case 6: count6++; break;
            }
        }

        // Display results
        printf("TOTAL OF 1s: %d\n", count1);
        printf("TOTAL OF 2s: %d\n", count2);
        printf("TOTAL OF 3s: %d\n", count3);
        printf("TOTAL OF 4s: %d\n", count4);
        printf("TOTAL OF 5s: %d\n", count5);
        printf("TOTAL OF 6s: %d\n", count6);

        fflush(stdin); // Clear input buffer
        printf("\n \nDO YOU WANT TO ROLL THE DICE AGAIN? (Y|N)\n");
        scanf(" %c", &response); // Added space before %c to consume newline

    } while (toupper(response) == 'Y');

    system("cls"); // Final clear screen

    return 0;
}