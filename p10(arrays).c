#include <stdio.h>

int main() {
    int arr[100], freq[100];
    int n, i, j;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[i] = -1;  // mark all unused
    }

    for (i = 0; i < n; i++) {
        if (freq[i] == 0)
            continue;  // already counted

        int count = 1;
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                freq[j] = 0;  // mark as counted
            }
        }
        freq[i] = count;
    }

    printf("\nFrequency of each element:\n");
    for (i = 0; i < n; i++) {
        if (freq[i] != 0) {
            printf("%d occurs %d times\n", arr[i], freq[i]);
        }
    }

    return 0;
}
