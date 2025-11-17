#include <stdio.h>

void findMinMax(int arr[], int n, int *min, int *max) {
    *min = arr[0];
    *max = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < *min)
            *min = arr[i];

        if (arr[i] > *max)
            *max = arr[i];
    }
}

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int min, max;

    // Call by reference → addresses of min and max passed
    findMinMax(arr, n, &min, &max);

    printf("\nMinimum value = %d\n", min);
    printf("Maximum value = %d\n", max);

    return 0;
}
