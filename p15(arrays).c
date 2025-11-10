#include <stdio.h>

#define SIZE 10

int main() {
    int arr[SIZE];
    int i;

    printf("Enter %d elements:\n", SIZE);
    for (i = 0; i < SIZE; i++) {
        scanf("%d", &arr[i]);
    }

    // Shift elements to the left
    for (i = 0; i < SIZE - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Optional: set last element to 0 after deletion
    arr[SIZE - 1] = 0;

    printf("\nArray after deleting first element:\n");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
