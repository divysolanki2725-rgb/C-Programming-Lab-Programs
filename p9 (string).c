#include <stdio.h>
#include <string.h>

int main() {
    char str1[200], str2[100];

    printf("Enter first string: ");
    gets(str1);   // or use fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    gets(str2);   // or use fgets(str2, sizeof(str2), stdin);

    strcat(str1, str2);   // Append str2 at the end of str1

    printf("Concatenated string: %s\n", str1);

    return 0;
}
