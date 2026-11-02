#include <stdio.h>

void main() {
    int a[100], size, temp, i, j;

    printf("Enter size of array: ");
    scanf("%d", &size);
    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) {
        printf("[%d] - ", i);
        scanf("%d", &a[i]);
    }

    for (i = 0; i < size - 1; i++) {
        for (j = i + 1; j < size; j++) {
            if (a[j] < a[i]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("Sorted array :\n");
    for (i = 0; i < size; i++) {
        printf("[ passs of %d] - %d\n", i, a[i]);
    }

    
}