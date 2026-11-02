#include<stdio.h>
int main(){
    int a[20],n,key;
    printf("Enter Arry size ");
    scanf("%d",&n);
    printf("Enter Sorted Array");
    for(int i=0;i<n;i++){
        scanf("%d\n",a[i]);
    }
    printf("Enter Key");
    scanf("%d",key);
    int low=0;
    int high=n-1;
    int mid=(low+high)/2;
    while (low<high)
    {
        if(key==a[mid]){
            printf("Elements are found");
            break;
        }
        else if(key < a[mid]){
            high=mid-1;
        }
        else if (key > a[mid]){    
            high = mid+1;
        }
    }
    if(low>high){
        printf("elements are not found");
    }
    
 }
