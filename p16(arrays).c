#include <stdio.h>

#define SIZE 10

int main() {
    int arr[SIZE];
    int i, pos;

    printf("Enter %d elements:\n", SIZE);
    for (i = 0; i < SIZE; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position to delete (0 to %d): ", SIZE - 1);
    scanf("%d", &pos);

    if (pos < 0 || pos >= SIZE) {
        printf("Invalid position.\n");
        return 1;
    }

    // Shift elements left from the deletion position
    for (i = pos; i < SIZE - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Optional: place 0 at last position after deletion
    arr[SIZE - 1] = 0;

    printf("\nArray after deletion:\n");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
