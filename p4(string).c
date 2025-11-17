#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    int i;

    printf("Enter a string: ");
    gets(str);   // or use fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (islower(str[i]))
            str[i] = toupper(str[i]);   // convert to upper
        else if (isupper(str[i]))
            str[i] = tolower(str[i]);   // convert to lower
    }

    printf("Toggle case string: %s\n", str);

    return 0;
}
