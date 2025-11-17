#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    gets(str);   // or use fgets(str, sizeof(str), stdin);

    strrev(str);   // Built-in function to reverse the string

    printf("Reversed string: %s\n", str);

    return 0;
}
