// 4. Divide two numbers
#include <stdio.h>
int main() {
    float a, b, c;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    c = a / b;
    printf("%.2f / %.2f = %.2f\n", a, b, c);
    return 0;
}
