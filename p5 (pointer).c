#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    char *word;

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    // Remove newline if present
    name[strcspn(name, "\n")] = '\0';

    char *words[20];
    int count = 0;

    // Split name into words using strtok
    word = strtok(name, " ");
    while(word != NULL) {
        words[count++] = word;
        word = strtok(NULL, " ");
    }

    // Print abbreviations for all except last name
    printf("\nAbbreviated Name: ");
    for(int i = 0; i < count - 1; i++) {
        printf("%c. ", words[i][0]);
    }

    // Print last name completely
    printf("%s\n", words[count - 1]);

    return 0;
}
