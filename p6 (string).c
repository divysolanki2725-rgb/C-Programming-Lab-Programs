#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int result;

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    result = strcmp(str1, str2);   // Compare strings

    if (result == 0)
        printf("Both strings are SAME.\n");
    else if (result > 0)
        printf("String 1 is GREATER than String 2.\n");
    else
        printf("String 1 is LOWER than String 2.\n");

    return 0;
}
