#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    gets(str);   // or use fgets(str, sizeof(str), stdin);

    strlwr(str); // Built-in function to convert to lowercase

    printf("String in lowercase: %s\n", str);

    return 0;
}
