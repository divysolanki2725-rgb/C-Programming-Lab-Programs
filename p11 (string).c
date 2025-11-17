#include <stdio.h>
#include <string.h>

int main() {
    char str[100], rev[100];
    int i;

    printf("Enter a string: ");
    gets(str);   // or use fgets(str, sizeof(str), stdin);

    strcpy(rev, str);   // Copy original string
    strrev(rev);        // Reverse using built-in function

    printf("\nReversed string printed vertically:\n");

    for (i = 0; rev[i] != '\0'; i++) {
        printf("%c\n", rev[i]);   // Print each character on new line
    }

    return 0;
}
