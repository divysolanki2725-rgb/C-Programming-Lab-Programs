#include <stdio.h>

int main() {
    int i, num;
    int largest, smallest;

    printf("Enter 100 numbers:\n");

    // Read first number to initialize largest and smallest
    scanf("%d", &num);
    largest = num;
    smallest = num;

    // Read remaining 99 numbers
    for (i = 1; i < 100; i++) {
        scanf("%d", &num);

        if (num > largest)
            largest = num;

        if (num < smallest)
            smallest = num;
    }

    printf("Largest = %d\n", largest);
    printf("Smallest = %d\n", smallest);

    return 0;
}
