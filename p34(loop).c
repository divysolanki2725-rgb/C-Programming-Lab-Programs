#include <stdio.h>

int main() {
    int n, i;
    int a = 1, b = 1, c;

    printf("Enter n: ");
    scanf("%d", &n);

    if (n >= 1) printf("%d\n", a);
    if (n >= 2) printf("%d\n", b);

    for (i = 3; i <= n; i++) {
        c = a + b;
        printf("%d\n", c);
        a = b;
        b = c;
    }

    return 0;
}
