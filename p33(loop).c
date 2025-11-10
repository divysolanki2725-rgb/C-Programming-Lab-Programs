#include <stdio.h>

int main() {
    int num, sq, temp;

    printf("Enter a number: ");
    scanf("%d", &num);

    sq = num * num;
    temp = num;

    int flag = 1;
    while (temp > 0) {
        if (temp % 10 != sq % 10) {
            flag = 0;
            break;
        }
        temp /= 10;
        sq /= 10;
    }

    if (flag == 1)
        printf("It is an automorphic number.\n");
    else
        printf("It is not an automorphic number.\n");

    return 0;
}
