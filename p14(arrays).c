#include <stdio.h>

#define SIZE 10

int main() {
    int arr[SIZE];
    int i, newNumber;

    printf("Enter 9 elements:\n");
    for (i = 0; i < SIZE - 1; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to insert at the last position: ");
    scanf("%d", &newNumber);

    arr[SIZE - 1] = newNumber;

    printf("\nArray after insertion:\n");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
