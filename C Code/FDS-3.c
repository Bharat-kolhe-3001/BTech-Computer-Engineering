#include<stdio.h>

void main() {
    int a[100], size, temp, i, j;

    printf("Enter size of array: ");
    scanf("%d", &size);

    for (i = 0; i < size; i++) {
        printf("[%d] - ", i);
        scanf("%d", &a[i]);
    }

    for (i = 1; i < size; i++) {
        temp = a[i];
        j = i - 1;
        
        while (j >= 0 && a[j] > temp) {
            a[j + 1] = a[j];
            j = j - 1;
        }
        
        a[j + 1] = temp;
    }

    printf("Sorted array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}
