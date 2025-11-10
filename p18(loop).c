#include <stdio.h>

int main() {
    int i;
    char sex;
    int boys = 0, girls = 0;

    printf("Enter sex code for 50 students (M for boy, F for girl):\n");

    for (i = 0; i < 50; i++) {
        scanf(" %c", &sex);   // space before %c to ignore newline

        if (sex == 'M' || sex == 'm')
            boys++;
        else if (sex == 'F' || sex == 'f')
            girls++;
    }

    printf("Number of boys = %d\n", boys);
    printf("Number of girls = %d\n", girls);

    return 0;
}
