#include <stdio.h>

#define SIZE 10

int main() {
    int arr[SIZE];
    int i, n;
    char direction;

    printf("Enter 10 elements:\n");
    for (i = 0; i < SIZE; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter number of positions to shift: ");
    scanf("%d", &n);

    printf("Enter direction (L for left, R for right): ");
    scanf(" %c", &direction);     // space to skip newline

    // Normalize n in case it exceeds array length
    if (n > SIZE) {
        n = SIZE;   // shifting more than array length empties entire array
    }

    // Temporary array for result
    int result[SIZE];

    if (direction == 'L' || direction == 'l') {
        // Shift left by n; pad right with zeros
        for (i = 0; i < SIZE; i++) {
            if (i + n < SIZE)
                result[i] = arr[i + n];
            else
                result[i] = 0;
        }
    } else if (direction == 'R' || direction == 'r') {
        // Shift right by n; pad left with zeros
        for (i = SIZE - 1; i >= 0; i--) {
            if (i - n >= 0)
                result[i] = arr[i - n];
            else
                result[i] = 0;
        }
    } else {
        printf("Invalid direction.\n");
        return 1;
    }

    printf("\nShifted array:\n");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}
