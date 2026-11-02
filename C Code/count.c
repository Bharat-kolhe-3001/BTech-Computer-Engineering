#include <stdio.h>

int main() {
    int a[10], size, temp;
    int count_swap = 0, count_comp = 0; 

    printf("Enter Array Size: "); 
    scanf("%d", &size); 

    printf("Enter Array Elements:\n");
    for (int i = 0; i < size; i++) { 
        printf("Enter Array Element at Index %d: ", i);
        scanf("%d", &a[i]);
    }

    for (int pass = 0; pass < size - 1; pass++) { 
        printf("Pass - %d \n", pass + 1);

        for (int j = 0; j < size - pass - 1; j++) { 
            count_comp++; 

            if (a[j] > a[j + 1]) { 
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                count_swap++; 
            }
        }

        printf("[");
        for (int i = 0; i < size; i++) { 
            printf("%d ", a[i]);
        }
        printf("]\n");
    }

    printf("Number of passes: %d\n", size - 1);
    printf("Number of comparisons done: %d\n", count_comp);
    printf("Number of swaps done: %d\n", count_swap);

    return 0; 
}