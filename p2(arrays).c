#include <stdio.h>

int main() {
    int arr[5], i, j, temp;

    // Accept 5 values from the user
    printf("Enter 5 integer values:\n");
    for (i = 0; i < 5; i++) {
        printf("Value %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Sort the array in ascending order (using simple bubble sort)
    for (i = 0; i < 5 - 1; i++) {
        for (j = i + 1; j < 5; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Print the sorted array
    printf("\nArray in ascending order:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}
