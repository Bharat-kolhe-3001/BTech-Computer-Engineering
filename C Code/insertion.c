#include<stdio.h>
void main()
{
    int i,j,k,n,s,temp,t,c=0,p=0;
    int a[20];

    printf("Enter the size of array ");
    scanf("%d",&n);
     for ( i = 0; i < n; i++)
   {
    printf("Enter the no.:");
    scanf("%d",&a[i]);
   }

    printf("Array is:\n ");


  for ( i = 0; i < n; i++)
  {
   printf(" %d ",a[i]);
  }
  

    for ( i = 1; i < n; i++)
    {  c=0;
        for ( j = 0; j < i; j++)
        {
            if (a[j]>a[i])
            {   c+=1;
                temp=a[j];
                a[j]=a[i];
                for ( k = i; k > j; k--)
                {   s+=1;
                    a[k]=a[k-1];
                }
                a[k+1]=temp;
                
            }
            
        }
        t+=c;
     printf("\nPass Result %d is:\n",i);
     p+=1;
     for(k=0;k<n;k++)
     {
       printf(" %d ",a[k]);
     }
        
    }

  printf("\nSorted array is:\n");
  for ( i = 0; i < n; i++)
  {
    printf(" %d ",a[i]);
  }
    
  
}
