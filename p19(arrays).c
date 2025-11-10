#include <stdio.h>

#define SIZE 10

int main() {
    int arr[SIZE];
    int i, value, found = 0;

    printf("Enter %d elements:\n", SIZE);
    for (i = 0; i < SIZE; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value to search: ");
    scanf("%d", &value);

    // Linear search
    for (i = 0; i < SIZE; i++) {
        if (arr[i] == value) {
            printf("Value %d found at position %d\n", value, i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Value %d not found in the array.\n", value);
    }

    return 0;
}
