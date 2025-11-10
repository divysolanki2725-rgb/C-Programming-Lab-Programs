#include <stdio.h>

int main() {
    float m1, m2, m3, total, avg;
    printf("Enter marks of 3 subjects: ");
    scanf("%f %f %f", &m1, &m2, &m3);

    total = m1 + m2 + m3;
    avg = total / 3;

    if (m1 < 35 || m2 < 35 || m3 < 35) {
        printf("Total = %.2f, Average = %.2f\n", total, avg);
        printf("Result: Fail (Less than 35 in one or more subjects)\n");
    } 
    else {
        printf("Total = %.2f, Average = %.2f\n", total, avg);

        if (avg >= 70)
            printf("Grade: Distinction\n");
        else if (avg >= 60)
            printf("Grade: First Class\n");
        else if (avg >= 50)
            printf("Grade: Second Class\n");
        else if (avg >= 35)
            printf("Grade: Third Class\n");
        else
            printf("Grade: Fail\n");
    }

    return 0;
}
