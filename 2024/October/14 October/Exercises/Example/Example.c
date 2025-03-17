#include <stdio.h>

int main() {
    // Initialize a 5x3 matrix with the given values
    // Each row represents a player and columns represent matches
    int golos[5][3] = {
        {2, 1, 3},  // Player 1's goals in 3 matches
        {0, 1, 0},  // Player 2's goals in 3 matches
        {4, 0, 1},  // Player 3's goals in 3 matches
        {1, 0, 1},  // Player 4's goals in 3 matches
        {0, 4, 2}   // Player 5's goals in 3 matches
    };

    // Display the matrix to verify values
    printf("Number of goals scored by players:\n");

    // Nested loop to iterate through all elements of the 2D array
    for (int i = 0; i < 5; i++) {      // Iterate through each row (player)
        for (int j = 0; j < 3; j++) {  // Iterate through each column (match)
            printf("%d ", golos[i][j]);
        }
        printf("\n");  // New line after each player's data
    }

    return 0;
}