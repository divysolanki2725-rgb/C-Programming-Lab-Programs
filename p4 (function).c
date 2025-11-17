#include <stdio.h>

void swap(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;

    printf("\nInside function (after swap): a = %d, b = %d\n", a, b);
}

int main() {
    int x, y;

    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);

    printf("\nBefore calling swap function: x = %d, y = %d\n", x, y);

    swap(x, y);   // Call by value

    printf("\nAfter calling swap function: x = %d, y = %d\n", x, y);

    return 0;
}
