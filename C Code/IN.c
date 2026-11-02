#include<stdio.h>
int main()
{
    int a[10],k;
    int n,i,j;
     printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("Enter the numbers:\n");
    for (int i = 0; i < n; i++) {
        printf("Enter number %d: ", i+1);
        scanf("%d", &a[i]);  
    }
    for(  i=1;i<=n-1;i++){
        for( j=0;j<i;j++){
            if(a[j]>a[i])
            {
                int temp = a[j];
                a[j] = a[i];
                for( k=i;k>j;k--){
                     a[k]= a[k-1];
                
                }
                a[k+1] = temp;
            }
        }
    }
     printf("Sorted array in  order: ");
    for (i = 0; i < n; i++) {
        printf("%c ", a[i]);
}
}

