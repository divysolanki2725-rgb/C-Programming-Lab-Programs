#include <stdio.h>

#define SIZE 10

int main() {
    int arr[SIZE];
    int i, newNumber;

    printf("Enter %d elements:\n", SIZE);
    for (i = 0; i < SIZE; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the new number to insert at the beginning: ");
    scanf("%d", &newNumber);

    // Shift elements to the right
    for (i = SIZE - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert at index 0
    arr[0] = newNumber;

    printf("\nArray after insertion:\n");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
