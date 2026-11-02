#include <stdio.h>
int main() {
    int i, j, n;
    int a[100];
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("Enter the numbers:\n");
    for (i = 0; i < n; i++) {
        printf("Enter number %d: ", i+1);
        scanf("%d", &a[i]);
    }
    printf("Originl array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    for (i = 0; i < n; i++) {
        printf("Pass %d: ", i+1);
        for (j = 0; j < n- 1; j++) {
            if (a[j] > a[j+1]) {
                int temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
            }
        }
        for (j = 0; j < n; j++) {
            printf("%d ", a[j]);
        }
        printf("\n");
    }
    printf("Sorted array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    printf("Number of passes: %d\n", n - 1);

    return 0;
}
