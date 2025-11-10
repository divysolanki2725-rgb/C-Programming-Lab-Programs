#include <stdio.h>

int main() {
    int num, temp, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while (temp > 0) {
        digit = temp % 10;
        sum += digit * digit * digit;   // cube of digit
        temp = temp / 10;
    }

    if (sum == num)
        printf("It is an Armstrong number.\n");
    else
        printf("It is not an Armstrong number.\n");

    return 0;
}
