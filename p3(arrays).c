#include <stdio.h>

int main() {
    int amount;
    int notes[] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
    int noteCount[9] = {0};  // To store count of each note
    int i;

    // Input the amount
    printf("Enter the amount: ");
    scanf("%d", &amount);

    // Calculate the number of each note
    for (i = 0; i < 9; i++) {
        if (amount >= notes[i]) {
            noteCount[i] = amount / notes[i];
            amount = amount % notes[i];
        }
    }

    // Print the result
    printf("\nMinimum number of notes required:\n");
    int totalNotes = 0;
    for (i = 0; i < 9; i++) {
        if (noteCount[i] != 0) {
            printf("%d x %d = %d\n", notes[i], noteCount[i], notes[i] * noteCount[i]);
            totalNotes += noteCount[i];
        }
    }

    printf("\nTotal number of notes: %d\n", totalNotes);

    return 0;
}
