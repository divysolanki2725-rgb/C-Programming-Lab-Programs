#include <stdio.h>

float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    if (b == 0) {
        printf("Error! Division by zero is not allowed.\n");
        return 0;
    }
    return a / b;
}

int main() {
    float x, y;
    int choice;

    printf("Enter two numbers: ");
    scanf("%f %f", &x, &y);

    printf("\nChoose Operation:\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");

    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Result = %.2f\n", add(x, y));
            break;

        case 2:
            printf("Result = %.2f\n", subtract(x, y));
            break;

        case 3:
            printf("Result = %.2f\n", multiply(x, y));
            break;

        case 4:
            printf("Result = %.2f\n", divide(x, y));
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
