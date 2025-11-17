#include <stdio.h>

void inputMatrix(int *mat) {
    printf("Enter 16 elements of the 4x4 matrix:\n");
    for(int i = 0; i < 16; i++) {
        scanf("%d", (mat + i));
    }
}

void sortArray(int *arr, int n) {
    int i, j, temp;
    for(i = 0; i < n - 1; i++) {
        for(j = i + 1; j < n; j++) {
            if(*(arr + j) < *(arr + i)) {
                temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }
}

void printArray(int *arr, int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
}

int main() {
    int matrix[4][4];
    int sorted[16];

    // Input 4x4 matrix
    inputMatrix((int *)matrix);

    // Copy matrix elements into 1D array
    for(int i = 0; i < 16; i++) {
        sorted[i] = *((int *)matrix + i);
    }

    // Sort the array
    sortArray(sorted, 16);

    // Print result
    printf("\nSorted 1-D Array:\n");
    printArray(sorted, 16);

    return 0;
}
