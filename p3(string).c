#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    gets(str);   // or use fgets(str, sizeof(str), stdin);

    strupr(str); // Built-in function to convert to uppercase

    printf("String in UPPERCASE: %s\n", str);

    return 0;
}
