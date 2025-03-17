#include <stdio.h>

int main() {
    float expenses[12] = {100, 200, 300, 300, 200, 100, 100, 100, 200, 300, 200, 500}; // monthly expenses values
    float total_expenses = 0, average;  // initialize total expenses and average to 0
    int i;

    // a) Calculate total expenses
    for (i = 0; i < 12; i++) {
        total_expenses += expenses[i]; // sum all monthly expenses
    }

    // b) Calculate average monthly expense
    average = total_expenses / 12;

    // c) Find months with above-average expenses
    printf("Months with expenses above monthly average (%.2f):\n", average);
    for (i = 0; i < 12; i++) {
        if (expenses[i] > average) {
            printf("Month %d, expense: %.2f\n", i + 1, expenses[i]);  // month is indexed from 1
        }
    }

    // d) Find months with highest expense
    float highest = expenses[0];
    for (i = 1; i < 12; i++) {
        if (expenses[i] > highest) {
            highest = expenses[i];  // update highest expense
        }
    }

    printf("Month(s) with highest expense (%.2f):\n", highest);
    for (i = 0; i < 12; i++) {
        if (expenses[i] == highest) {  // find all months with highest expense
            printf("Month %d\n", i + 1);
        }
    }

    // e) Find months with lowest expense
    float lowest = expenses[0];
    for (i = 1; i < 12; i++) {
        if (expenses[i] < lowest) {
            lowest = expenses[i];  // update lowest expense
        }
    }

    printf("Month(s) with lowest expense (%.2f):\n", lowest);
    for (i = 0; i < 12; i++) {
        if (expenses[i] == lowest) {  // find all months with lowest expense
            printf("Month %d\n", i + 1);
        }
    }

    return 0;
}