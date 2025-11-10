#include <stdio.h>

int main() {
    int values[10];  // Array to store 10 integers

    // Accept 10 values from the user
    printf("Enter 10 integer values:\n");
    for (int i = 0; i < 10; i++) {
        printf("Value %d: ", i + 1);
        scanf("%d", &values[i]);
    }

    // Print the 4th, 7th, and 9th values
    printf("\nThe 4th, 7th, and 9th values are:\n");
    printf("4th value: %d\n", values[3]);  // index 3 → 4th element
    printf("7th value: %d\n", values[6]);  // index 6 → 7th element
    printf("9th value: %d\n", values[8]);  // index 8 → 9th element

    return 0;
}
