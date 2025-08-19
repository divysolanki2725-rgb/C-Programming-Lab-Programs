// 11. Convert grams into kg
#include <stdio.h>
int main() {
    float grams;
    printf("Enter grams: ");
    scanf("%f", &grams);
    printf("%.2f grams = %.2f kg\n", grams, grams / 1000);
    return 0;
}
