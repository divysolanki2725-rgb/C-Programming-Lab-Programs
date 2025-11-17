#include <stdio.h>
#include <string.h>

int main() {
    char str[100], rev[100];

    printf("Enter a string: ");
    gets(str);  // or use fgets(str, sizeof(str), stdin)

    strcpy(rev, str);   // Copy original string
    strrev(rev);        // Reverse the copied string

    if (strcmp(str, rev) == 0)
        printf("The string is a PALINDROME.\n");
    else
        printf("The string is NOT a palindrome.\n");

    return 0;
}
