#include <stdio.h>

int main() {
    int i;
    float num, sum = 0, mean;

    printf("Enter 10 values:\n");
    for (i = 0; i < 10; i++) {
        scanf("%f", &num);
        sum += num;
    }

    mean = sum / 10;

    printf("Sum = %.2f\n", sum);
    printf("Mean = %.2f\n", mean);

    return 0;
}
