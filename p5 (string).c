#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    printf("Enter the first string: ");
    gets(str1);   // or use fgets(str1, sizeof(str1), stdin);

    strcpy(str2, str1);   // Copy str1 into str2

    printf("Copied string (str2): %s\n", str2);

    return 0;
}
