//Buble Sorting practical 2
#include <stdio.h>


int main() {
    int i, j, n;
    int a[50];
    
    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter the numbers:\n");
    for (i = 0; i < n; i++) {
        printf("Enter number %d: ", i+1);
        scanf("%d", &a[i]);
    }

   printf("orignall array:");
   for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    //perform buble sort
    for(i=0; i<n-1;i++){
        pass("%d",i+1);

        


    }
    return 0;

}