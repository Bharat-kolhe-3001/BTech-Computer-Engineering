#include<stdio.h>
#include<string.h>
struct stud{
     char name[20];
    
};
void main()

{
    struct stud s[10];
    int a,ch,i,h,m,n,bh,new,flag=1,de;
    printf("enter the number of students ");
    scanf("%d",&a);
 do
 {   
    printf("Selecte ");
     printf("MENU\n1.INSERT\n2.DISPLAY\n3.UPDATE\n4.DELETE\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        {
            printf("Enter the name of students:");
            for(i=0;i<a;i++)
            {
                scanf("%s%d",s[i].name);
            }
        }
        break;
        case 2:
        {
            
            for(i=0;i<a;i++)
            {
                printf("%s\n%d\n",s[i].name,s[i].roll);
            }
        }
        break;
        case 3 :
        {
         printf("MENU\n1.Name \n2.Roll\n");
         scanf("%d",&bh);
       switch (bh)
       {
       case 1:
       printf("Enter the roll no of the name you want to change ");
       scanf("%d",&new);
       for ( i = 0; i < a; i++)
       {  flag=0;
          if (s[i].roll==new)
          {
            printf("Enter the new name");
            scanf("%s",s[i].name);
          }
          
       }
       if(flag==1)
       {
        printf("Inavlid roll no.");
       }       
        break;
       case 2:
       printf("Enter The Roll Number To Modify");
       scanf("%d",&new);
          for ( i = 0; i < a; i++)
       {  flag=1;
          if (s[i].roll==new)
          {
            printf("Enter the new roll no.");
            scanf("%d",&s[i].roll);
          }
          
       }
              if(!flag)
       {
        printf("Inavlid roll no.");
       }       
        break;
       }
    }
    break;
    case 4:
    printf("Enter the roll no. you want to delete");
    scanf("%d",&de);
    for(i=0;i<a;i++)
    {
        if(s[i].roll==de)
        { strcpy(s[i].name,s[i+1].name);
            s[i].roll=s[i+1].roll;       
        }
    }a--;}
 } while (ch!=5);
 
    }