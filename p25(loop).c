#include <stdio.h>

int main() {
    int num, temp, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while (temp > 0) {
        reverse = reverse * 10 + (temp % 10);
        temp = temp / 10;
    }

    if (reverse == num)
        printf("It is a palindrome number.\n");
    else
        printf("It is not a palindrome number.\n");

    return 0;
}
