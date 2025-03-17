#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <string.h>

// Function to get user input for the number of trips per day
void getTravelData(char *weekDays[], int travelDay[]) {
    printf("Enter the number of trips for each day of the week:\n");
    for (int i = 0; i < 7; i++) {
        printf("%s: ", weekDays[i]);
        scanf("%d", &travelDay[i]);
    }
}

// Function to write travel data to a file
void writeTravelDataToFile(const char *filename, int travelDay[]) {
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        printf("Error opening file.\n");
        return;
    }
    for (int i = 0; i < 7; i++) {
        fprintf(file, "%d\n", travelDay[i]);
    }
    fclose(file);
    printf("\nTravel data saved to %s\n", filename);
}

// Function to print hexadecimal representation of a concatenated integer
void printHexadecimal(int travelDay[]) {
    char concatenatedTrips[64] = {0}; // Array to store concatenated trips as a string
    for (int i = 0; i < 7; i++) {
        char buffer[10];
        sprintf(buffer, "%d", travelDay[i]); // Convert each trip count to string
        strcat(concatenatedTrips, buffer); // Concatenate the string
    }
    long long totalTrips = atoll(concatenatedTrips); // Convert concatenated string to a long long integer
    printf("%llX", totalTrips); // Print the hexadecimal string
}

int main() {
    setlocale(LC_ALL, "Portuguese_Portugal"); // Set locale to Portuguese

    char *weekDays[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    int travelDay[7] = {0};
    int option;
    char resp;

    // Get user input and save to file
    getTravelData(weekDays, travelDay);
    writeTravelDataToFile("DECEMBER/10 DEC/travel_data.txt", travelDay);

    do {
        printf("\nMenu:\n");
        printf("1 - Show trips for each day\n");
        // Option 1: Display the number of trips for each day of the week
        printf("2 - Show the day(s) with the most trips\n");
        // Option 2: Display the day(s) with the highest number of trips
        printf("3 - Show the day(s) with the fewest trips\n");
        // Option 3: Display the day(s) with the lowest number of trips
        printf("4 - Show average trips per week\n");
        // Option 4: Calculate and display the average number of trips per week
        printf("5 - Show average trips per weekend\n");
        // Option 5: Calculate and display the average number of trips per weekend
        printf("6 - Show days with zero trips\n"); // Option 6: Display the day(s) with zero trips
        printf("7 - Compare weekday and weekend trips\n");
        // Option 7: Compare the total number of trips on weekdays vs weekends
        printf("8 - Transform total trips to hexadecimal code\n");
        // Option 8: Transform total trips to hexadecimal code
        printf("\nOption: ");
        scanf("%d", &option);

        if (option == 1) {
            // Display the number of trips for each day of the week
            for (int i = 0; i < 7; i++) {
                printf("%s: %d trips\n", weekDays[i], travelDay[i]);
            }
        } else if (option == 2) {
            // Display the day(s) with the highest number of trips
            int maxTrips = travelDay[0];
            for (int i = 1; i < 7; i++) {
                if (travelDay[i] > maxTrips) {
                    maxTrips = travelDay[i];
                }
            }
            printf("The day(s) with the most trips: ");
            for (int i = 0; i < 7; i++) {
                if (travelDay[i] == maxTrips) {
                    printf("%s ", weekDays[i]);
                }
            }
            printf("\n");
        } else if (option == 3) {
            // Display the day(s) with the lowest number of trips
            int minTrips = travelDay[0];
            for (int i = 1; i < 7; i++) {
                if (travelDay[i] < minTrips) {
                    minTrips = travelDay[i];
                }
            }
            printf("The day(s) with the fewest trips: ");
            for (int i = 0; i < 7; i++) {
                if (travelDay[i] == minTrips) {
                    printf("%s ", weekDays[i]);
                }
            }
            printf("\n");
        } else if (option == 4) {
            // Calculate and display the average number of trips per week
            float totalTrips = 0;
            for (int i = 0; i < 7; i++) {
                totalTrips += travelDay[i];
            }
            printf("Average trips per week: %.2f\n", totalTrips / 7);
        } else if (option == 5) {
            // Calculate and display the average number of trips per weekend
            float weekendTrips = travelDay[5] + travelDay[6];
            printf("Average trips per weekend: %.2f\n", weekendTrips / 2);
        } else if (option == 6) {
            // Display the day(s) with zero trips
            printf("The day(s) with zero trips: ");
            for (int i = 0; i < 7; i++) {
                if (travelDay[i] == 0) {
                    printf("%s ", weekDays[i]);
                }
            }
            printf("\n");
        } else if (option == 7) {
            // Compare the total number of trips on weekdays vs weekends
            int weekdayTrips = 0, weekendTrips = 0;
            for (int i = 0; i < 5; i++) weekdayTrips += travelDay[i];
            for (int i = 5; i < 7; i++) weekendTrips += travelDay[i];
            printf("Weekday trips: %d, Weekend trips: %d\n", weekdayTrips, weekendTrips);
        } else if (option == 8) {
            // Transform total trips to hexadecimal code
            printf("Hexadecimal representation of total trips: ");
            printHexadecimal(travelDay);
            printf("\n");
        } else {
            printf("Invalid option.\n");
        }

        printf("\nWant to see another option? (S/N): ");
        while ((getchar()) != '\n') {} // Clear input buffer
        scanf("%c", &resp);
    } while (toupper(resp) == 'S');

    // GitHub copilot helped us organize the project and with some functions.

    return 0;
}