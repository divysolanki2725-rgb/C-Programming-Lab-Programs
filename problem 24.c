#include <stdio.h>

int main() {
    int a, b, temp;

    // Input two values
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Display before swapping
    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Swap using a temporary variable
    temp = a;
    a = b;
    b = temp;

    // Display after swapping
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
