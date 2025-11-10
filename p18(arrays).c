#include <stdio.h>

#define SIZE 10

int main() {
    int arr[SIZE];
    int i, value, pos = -1;

    printf("Enter %d elements:\n", SIZE);
    for (i = 0; i < SIZE; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value to delete: ");
    scanf("%d", &value);

    // Find the position of the value
    for (i = 0; i < SIZE; i++) {
        if (arr[i] == value) {
            pos = i;
            break;
        }
    }

    if (pos == -1) {
        printf("Value not found in array.\n");
        return 0;
    }

    // Shift elements left from the delete position
    for (i = pos; i < SIZE - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Optional: clear last element
    arr[SIZE - 1] = 0;

    printf("\nArray after deletion:\n");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
