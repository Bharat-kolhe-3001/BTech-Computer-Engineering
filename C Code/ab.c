#include<stdio.h> 
void main() 
{ int a[10], i, j, temp, size, k; printf("Enter total count of array:"); scanf("%d", &size); printf("\nEnter the array elements:"); for(i=0; i<size; i++) scanf("%d", &a[i]); 
for(i=1; i<size; i++) 
{ for(j=0; j<i; j++) 
{ if(a[j] > a[i]) 
{ temp = a[j]; a[j] = a[i]; 
 
for (k=i; k>j; k--) 
	 	a[k] = a[k-1]; 
 
a[k+1] = temp; 
} 
} } 
printf("\nThe sorted array is:"); for(i=0; i<size; i++) printf("%d\t", a[i]); 
} 
