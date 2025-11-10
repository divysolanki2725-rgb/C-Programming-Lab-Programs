#include <stdio.h>

#define SIZE 10

int main() {
    int arr[SIZE];
    int i;

    printf("Enter %d elements:\n", SIZE);
    for (i = 0; i < SIZE; i++) {
        scanf("%d", &arr[i]);
    }

    // Delete the last element by setting it to 0
    arr[SIZE - 1] = 0;

    printf("\nArray after deleting last element:\n");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
