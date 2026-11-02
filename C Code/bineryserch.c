#include<stdio.h>
int main()
{
    int n,i,key;
    int a[20];
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter the sorted array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the key present in the array:");
    scanf("%d",&key);
    int l=0,h=n-1;
    while (l<=h)
    {
        int m = (h+l)/2;
        if(a[m]==key)
        {
            printf("key is present at a[%d] position",m);
            break;
        }
        else if(a[m]<key)
        {
            l=m+1;
        }
        else
        {
            h=m-1;
        }
    }
    if (l>h)
    {
        printf("key is not present in the array");
    }
    return 0;
}