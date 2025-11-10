#include <stdio.h>
int main() {
    int n, i, count = 0, num = 1;
    printf("Enter n: ");
    scanf("%d", &n);
    while(count < n) {
        printf("%d ", num);
        num += 2;
        count++;
    }
    return 0;
}
