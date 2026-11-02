#include <stdio.h>

int main() {
    int arr[10];
    int i, j, n, min, swap = 0;
    printf("Enter the number of elements you want to sort (maximum 10): ");
    scanf("%d", &n);

    printf("Enter the array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < (n - 1); i++) {
        min = i;
        for (j = i + 1; j < n; j++) {
            if (arr[min] > arr[j]) {
                swap = arr[j];
                arr[j] = arr[min];
                arr[min] = swap;
                // Increment the swap count
                swap++;
            }
        }
    }

    printf("Sorted array is: ");
    for (i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }

    printf("\nNumber of swaps made: %d\n", swap);

    return 0;
}
