// 10. Convert dollars into pounds (1$ = 48 Rs, 1 pound = 70 Rs)
#include <stdio.h>
int main() {
    float dollars, rs, pounds;
    printf("Enter dollars: ");
    scanf("%f", &dollars);
    rs = dollars * 48;
    pounds = rs / 70;
    printf("%.2f dollars = %.2f pounds\n", dollars, pounds);
    return 0;
}
