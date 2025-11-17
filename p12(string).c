#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[200];
    int i;
    int a = 0, e = 0, i_v = 0, o = 0, u = 0;

    printf("Enter a string: ");
    gets(str);    // or use fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);   // Convert to lowercase (built-in)

        if (ch == 'a')
            a++;
        else if (ch == 'e')
            e++;
        else if (ch == 'i')
            i_v++;
        else if (ch == 'o')
            o++;
        else if (ch == 'u')
            u++;
    }

    printf("\nVowel Frequencies:\n");
    printf("a = %d\n", a);
    printf("e = %d\n", e);
    printf("i = %d\n", i_v);
    printf("o = %d\n", o);
    printf("u = %d\n", u);

    return 0;
}
