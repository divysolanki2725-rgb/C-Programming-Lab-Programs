#include <stdio.h>

int main() {
    int i, num;
    int positive = 0, negative = 0, zero = 0;

    printf("Enter 200 values:\n");

    for (i = 0; i < 200; i++) {
        scanf("%d", &num);

        if (num > 0)
            positive++;
        else if (num < 0)
            negative++;
        else
            zero++;
    }

    printf("Positive numbers = %d\n", positive);
    printf("Negative numbers = %d\n", negative);
    printf("Zeroes = %d\n", zero);

    return 0;
}
