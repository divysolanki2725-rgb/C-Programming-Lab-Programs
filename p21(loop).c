#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Digits:\n");
    while (num > 0) {
        printf("%d\n", num % 10);  // prints last digit
        num = num / 10;            // remove last digit
    }

    return 0;
}
