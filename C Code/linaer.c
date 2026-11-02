#include<stdio.h>
#include<string.h>
void main()
{
    int i,j,comp,flag,n;
    char a[10][10];
    char key[10];

    printf("Enter the size of Array: ");
    scanf("%d",&n);

    for ( i = 0; i < n; i++)
    {
        printf("\nEnter the Element: ");
        scanf(" %s",a[i]);
    }

    printf("\nOur Array is: \n");
    for ( i = 0; i < n; i++)
    {
        printf(" %s\t",a[i]);
    }
    
    printf("\nEnter the Element you want to find: ");
    scanf(" %s",key);
    flag=1;
    
    for(i=0;i<n;i++)
    {  
        if(strcmp(a[i], key)==0)
        {   
            flag=0;
            printf("Key is found at Array Position %d,\nwhich is '%s'.",i+1,key);
            break;
        }
    }
    if(flag!=0)
    {
        printf("The Key you Entered: '%s', is not found in the given Array.",key);
    }
}

