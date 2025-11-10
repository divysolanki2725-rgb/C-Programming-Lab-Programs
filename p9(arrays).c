#include <stdio.h>

int main() {
    int arr[5];
    int n, i, temp;

    // Input number of elements (max 5)
    printf("Enter number of elements (max 5): ");
    scanf("%d", &n);

    if (n > 5 || n < 1) {
        printf("Invalid input! Please enter between 1 and 5.\n");
        return 1;
    }

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Reverse the array
    for (i = 0; i < n / 2; i++) {
        temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }

    // Print reversed array
    printf("Reversed array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
