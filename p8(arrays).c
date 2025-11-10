#include <stdio.h>

int main() {
    int src[5] = {10, 20, 30, 40, 50};
    int dest[10];  // destination array of 10 elements
    int i, j = 0;

    // Initialize dest with zeros for clarity
    for (i = 0; i < 10; i++) {
        dest[i] = 0;
    }

    // Copy elements from src to dest, skipping one element
    for (i = 0; i < 5; i++) {
        if (i == 2)  // skip the 3rd element (index 2)
            continue;
        dest[j] = src[i];
        j++;
    }

    // Print the destination array
    printf("Destination array:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", dest[i]);
    }
    printf("\n");

    return 0;
}
