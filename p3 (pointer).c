#include <stdio.h>

void inputMatrix(int *mat) {
    printf("Enter 9 elements of the 3x3 matrix:\n");
    for(int i = 0; i < 9; i++) {
        scanf("%d", (mat + i));
    }
}

int main() {
    int matrix[3][3];
    int *ptr = (int *)matrix;

    // Input
    inputMatrix(ptr);

    // Initialize largest and smallest
    int smallest = *ptr;
    int largest = *ptr;

    // Traverse using pointer
    for(int i = 0; i < 9; i++) {
        if(*(ptr + i) < smallest)
            smallest = *(ptr + i);

        if(*(ptr + i) > largest)
            largest = *(ptr + i);
    }

    // Output
    printf("\nSmallest number = %d\n", smallest);
    printf("Largest number  = %d\n", largest);

    return 0;
}
