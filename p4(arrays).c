#include <stdio.h>

int main() {
    int r, c, i, j;
    int a[100][100], b[100][100], sum[100][100];

    // Input: rows and columns
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);

    // Input: first matrix
    printf("Enter elements of first matrix:\n");
    for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j)
            scanf("%d", &a[i][j]);

    // Input: second matrix
    printf("Enter elements of second matrix:\n");
    for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j)
            scanf("%d", &b[i][j]);

    // Sum of matrices
    for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j)
            sum[i][j] = a[i][j] + b[i][j];

    // Output: result
    printf("Sum of the two matrices:\n");
    for(i = 0; i < r; ++i) {
        for(j = 0; j < c; ++j)
            printf("%d ", sum[i][j]);
        printf("\n");
    }

    return 0;
}
