#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int len;

    printf("Enter a string: ");
    gets(str);   // or use fgets(str, sizeof(str), stdin);

    len = strlen(str);  // Built-in function to find length

    printf("Length of the string = %d\n", len);

    return 0;
}
