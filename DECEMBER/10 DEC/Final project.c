#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

// Function to write the number of travels for each day of the week
void writeTravelNumber(char *weekDays[], int travelDay[]) {
    for (int i = 0; i < 7; i++) {
        printf("%s: ", weekDays[i]);
        scanf("%d", &travelDay[i]);
    }
}

// Function to read travel data from a file
void readTravelDataFromFile(char *filename, int travelDay[]) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return;
    }
    for (int i = 0; i < 7; i++) {
        fscanf(file, "%d", &travelDay[i]);
    }
    fclose(file);
}

// Function to write travel data to a file
void writeTravelDataToFile(char *filename, int travelDay[]) {
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        printf("Error opening file.\n");
        return;
    }
    for (int i = 0; i < 7; i++) {
        fprintf(file, "%d\n", travelDay[i]);
    }
    fclose(file);
}

// Function to print binary representation of an integer
void printBinary(int n) {
    for (int i = 31; i >= 0; i--) {
        printf("%d", (n >> i) & 1);
    }
    printf("\n");
}

int main() {
    setlocale(LC_ALL, "Portuguese_Portugal"); // Portuguese language

    // Pre-defined the days of the week
    char *weekDays[] = {
        "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"
    };

    int travelDay[7] = {0};

    // Read travel data from file
    readTravelDataFromFile("travel_data.txt", travelDay);

    int option;
    char resp;

    do {
        printf("\n 1 - Show the days of the week and their respective trips");
        printf("\n 2 - Show the day(s) with the most trips");
        printf("\n 3 - Show the day(s) with the fewest trips");
        printf("\n 4 - Show average trips per week");
        printf("\n 5 - Show average trips per weekend");
        printf("\n 6 - Show the day(s) of the week that there were 0 trips");
        printf("\n 7 - Show a comparison of trips between weekdays and weekends");
        printf("\n 8 - Show the total number of trips in the month");
        printf("\n 9 - Show the percentage of trips made on weekends");
        printf("\n 10 - Show the day with the highest percentage of trips relative to the total");
        printf("\n 11 - Save travel data to file");
        printf("\n 12 - Print binary representation of total trips");
        printf("\n Option: ");
        scanf("%d", &option);

        if (option == 1) {
            for (int i = 0; i < 7; i++) {
                printf("%s: %d trips\n", weekDays[i], travelDay[i]);
            }
        } else if (option == 2) {
            int maxTrips = travelDay[0];
            for (int i = 1; i < 7; i++) {
                if (travelDay[i] > maxTrips) {
                    maxTrips = travelDay[i];
                }
            }
            printf("The day(s) with the most trips was: ");
            for (int i = 0; i < 7; i++) {
                if (travelDay[i] == maxTrips) {
                    printf("%s ", weekDays[i]);
                }
            }
            printf("\n");
        } else if (option == 3) {
            int minTrips = travelDay[0];
            for (int i = 1; i < 7; i++) {
                if (travelDay[i] < minTrips) {
                    minTrips = travelDay[i];
                }
            }
            printf("The day(s) with the fewest trips was: ");
            for (int i = 0; i < 7; i++) {
                if (travelDay[i] == minTrips) {
                    printf("%s ", weekDays[i]);
                }
            }
            printf("\n");
        } else if (option == 4) {
            float totalTrips = 0;
            for (int i = 0; i < 7; i++) {
                totalTrips += travelDay[i];
            }
            printf("Average trips per week: %.2f\n", totalTrips / 7);
        } else if (option == 5) {
            float weekendTrips = 0;
            for (int i = 5; i < 7; i++) {
                weekendTrips += travelDay[i];
            }
            printf("Average trips per weekend: %.2f\n", weekendTrips / 2);
        } else if (option == 6) {
            printf("The day(s) with zero trips were: ");
            for (int i = 0; i < 7; i++) {
                if (travelDay[i] == 0) {
                    printf("%s ", weekDays[i]);
                }
            }
            printf("\n");
        } else if (option == 7) {
            int weekdaysTrips = 0;
            int weekendsTrips = 0;
            for (int i = 0; i < 5; i++) {
                weekdaysTrips += travelDay[i];
            }
            for (int i = 5; i < 7; i++) {
                weekendsTrips += travelDay[i];
            }
            printf("Weekday trips: %d\n", weekdaysTrips);
            printf("Weekend trips: %d\n", weekendsTrips);
        } else if (option == 8) {
            int totalTrips = 0;
            for (int i = 0; i < 7; i++) {
                totalTrips += travelDay[i];
            }
            printf("Total number of trips in the month: %d\n", totalTrips * 4); // Assuming 4 weeks in a month
        } else if (option == 9) {
            int weekendTrips = 0;
            int totalTrips = 0;
            for (int i = 0; i < 7; i++) {
                totalTrips += travelDay[i];
                if (i >= 5) {
                    weekendTrips += travelDay[i];
                }
            }
            printf("Percentage of trips made on weekends: %.2f%%\n", (weekendTrips / (float)totalTrips) * 100);
        } else if (option == 10) {
            int totalTrips = 0;
            for (int i = 0; i < 7; i++) {
                totalTrips += travelDay[i];
            }
            float maxPercentage = 0;
            int maxDay = 0;
            for (int i = 0; i < 7; i++) {
                float percentage = (travelDay[i] / (float)totalTrips) * 100;
                if (percentage > maxPercentage) {
                    maxPercentage = percentage;
                    maxDay = i;
                }
            }
            printf("The day with the highest percentage of trips relative to the total is %s with %.2f%% of the trips.\n", weekDays[maxDay], maxPercentage);
        } else if (option == 11) {
            writeTravelDataToFile("travel_data.txt", travelDay);
            printf("Travel data saved to file.\n");
        } else if (option == 12) {
            int totalTrips = 0;
            for (int i = 0; i < 7; i++) {
                totalTrips += travelDay[i];
            }
            printf("Binary representation of total trips: ");
            printBinary(totalTrips);
        }

        printf("\n Want to see another option? (S/N): ");
        while ((getchar()) != '\n') {} // Clear input buffer
        scanf("%c", &resp);
    } while (toupper(resp) == 'S');

    system("cls"); // Clears the screen

    return 0;
}