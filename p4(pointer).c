#include <stdio.h>

int main() {
    char books[3][50];      // To store 3 book names
    char *ptr[3];           // Array of pointers

    // Point each pointer to the corresponding string
    for(int i = 0; i < 3; i++) {
        ptr[i] = books[i];
    }

    // Input book names
    printf("Enter names of 3 books:\n");
    for(int i = 0; i < 3; i++) {
        printf("Book %d: ", i + 1);
        scanf(" %[^\n]", ptr[i]);   // Read string with spaces
    }

    // Print book names
    printf("\nYou entered the following books:\n");
    for(int i = 0; i < 3; i++) {
        printf("Book %d: %s\n", i + 1, ptr[i]);
    }

    return 0;
}
