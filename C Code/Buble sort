#include <stdio.h>

int main() {
    int i, j, n;
    int a[10];
    int comparisons = 0; 
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("Enter the numbers:\n");
    for (i = 0; i < n; i++) {
        printf("Enter number %d: ", i+1);
        scanf("%d", &a[i]);  
    } 
    printf("Original array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    for (i = 0; i < n - 1; i++) {
        printf("Pass %d:\n", i+1);
        for (j = 0; j < n - i - 1; j++) 
        {
            comparisons++; 
            if (a[j] > a[j+1]) {
                int temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
            }
            for (int k = 0; k < n; k++) {
                printf("%d ", a[k]);
            }
            printf("\n");
        }
    }
    printf("Sorted array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    printf("Number of pass`es: %d\n", n - 1);
    printf("Number of comparisons: %d\n", comparisons);

    return 0;
}
