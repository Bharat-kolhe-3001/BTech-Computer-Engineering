#include <stdio.h>

int main() {
    int a[20], n, key;
    
    printf("Enter Array size: ");
    scanf("%d", &n);

    printf("Enter Sorted Array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter Key: ");
    scanf("%d", &key);

    int low = 0;
    int high = n - 1;
    int mid;

    while (low <= high) {
        mid = (low + high) / 2;
        if (key == a[mid]) {
            printf("Element found at index %d\n", mid);
            return 0;
        } else if (key < a[mid]) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    printf("Element not found\n");

    return 0;
}
