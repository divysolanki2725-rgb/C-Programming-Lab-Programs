#include <stdio.h>

int main() {
    float sub1, sub2, sub3, total, average;

    // Input marks of three subjects
    printf("Enter marks of three subjects: ");
    scanf("%f %f %f", &sub1, &sub2, &sub3);

    // Calculate total
    total = sub1 + sub2 + sub3;

    // Calculate average
    average = total / 3;

    // Display results
    printf("Total = %.2f\n", total);
    printf("Average = %.2f\n", average);

    return 0;
}
