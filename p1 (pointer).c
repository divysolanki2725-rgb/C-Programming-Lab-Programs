#include <stdio.h>

void inputMatrix(int *mat, int r, int c) {
    int i, j;
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", (mat + i*c + j));
        }
    }
}

void printMatrix(int *mat, int r, int c) {
    int i, j;
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            printf("%d ", *(mat + i*c + j));
        }
        printf("\n");
    }
}

void addMatrix(int *a, int *b, int *res, int r, int c) {
    int i, j;
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            *(res + i*c + j) = *(a + i*c + j) + *(b + i*c + j);
        }
    }
}

void subMatrix(int *a, int *b, int *res, int r, int c) {
    int i, j;
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            *(res + i*c + j) = *(a + i*c + j) - *(b + i*c + j);
        }
    }
}

void multiplyMatrix(int *a, int *b, int *res, int r1, int c1, int c2) {
    int i, j, k;
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++) {
            *(res + i*c2 + j) = 0;
            for(k = 0; k < c1; k++) {
                *(res + i*c2 + j) += (*(a + i*c1 + k) * *(b + k*c2 + j));
            }
        }
    }
}

int main() {
    int r1, c1, r2, c2;

    printf("Enter rows and columns of Matrix A: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns of Matrix B: ");
    scanf("%d %d", &r2, &c2);

    int A[r1][c1], B[r2][c2];

    printf("Enter elements of Matrix A:\n");
    inputMatrix((int *)A, r1, c1);

    printf("Enter elements of Matrix B:\n");
    inputMatrix((int *)B, r2, c2);

    // ADD & SUB only if dimensions match
    if(r1 == r2 && c1 == c2) {
        int Add[r1][c1], Sub[r1][c1];
        addMatrix((int *)A, (int *)B, (int *)Add, r1, c1);
        subMatrix((int *)A, (int *)B, (int *)Sub, r1, c1);

        printf("\nAddition of Matrices:\n");
        printMatrix((int *)Add, r1, c1);

        printf("\nSubtraction of Matrices:\n");
        printMatrix((int *)Sub, r1, c1);
    } else {
        printf("\nAddition/Subtraction not possible (Dimension mismatch).\n");
    }

    // MULTIPLICATION only if c1 == r2
    if(c1 == r2) {
        int Mul[r1][c2];
        multiplyMatrix((int *)A, (int *)B, (int *)Mul, r1, c1, c2);

        printf("\nMultiplication of Matrices:\n");
        printMatrix((int *)Mul, r1, c2);
    } else {
        printf("\nMultiplication not possible (c1 != r2).\n");
    }

    return 0;
}
