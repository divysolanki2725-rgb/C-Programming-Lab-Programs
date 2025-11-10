#include <stdio.h>

#define SIZE 10

int main() {
    int arr[SIZE];
    int i, pos, newNumber;

    printf("Enter %d elements:\n", SIZE);
    for (i = 0; i < SIZE; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position to insert (0 to %d): ", SIZE - 1);
    scanf("%d", &pos);

    if (pos < 0 || pos >= SIZE) {
        printf("Invalid position.\n");
        return 1;
    }

    printf("Enter the new number: ");
    scanf("%d", &newNumber);

    // Shift elements to the right
    for (i = SIZE - 1; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert at the given position
    arr[pos] = newNumber;

    printf("\nArray after insertion:\n");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
