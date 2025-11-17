#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i;

    printf("Enter a string: ");
    gets(str);    // or use fgets(str, sizeof(str), stdin);

    printf("\nCharacters printed vertically:\n");

    for (i = 0; str[i] != '\0'; i++) {
        printf("%c\n", str[i]);   // print each character in new line
    }

    return 0;
}
