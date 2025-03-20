/* Assigment 1: dice.c: A program that simulates rolling two dice 36,000 times, tallies the frequency of each possible sum (2 to 12), and displays the results in a table along with the relative frequencies. */
/* Author: Edison Lin */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator with the current time
    srand(time(NULL));

    // Variables for dice rolls and frequencies
    int dice1, dice2, sum;
    int frequency[13] = {0}; // We need 13 spots (index 0 to 12, but we'll ignore index 0)

    // Roll the dice 36,000 times
    for (int i = 0; i < 36000; i++) {
        // Roll two dice
        dice1 = rand() % 6 + 1;
        dice2 = rand() % 6 + 1;

        // Calculate the sum
        sum = dice1 + dice2;

        // Increment the frequency of the sum
        frequency[sum]++;
    }

    // Print the results in a table format
    printf("Dice Roll Simulation:\n\n");
    printf("Sum\tFrequency\tRelative Frequency\n");
    for (int i = 2; i <= 12; i++) {
        printf("%d\t%d\t\t%.2f%%\n", i, frequency[i], (frequency[i] / 36000.0) * 100);
    }

    return 0;
}

