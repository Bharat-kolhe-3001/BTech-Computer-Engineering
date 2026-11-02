#include<stdio.h>
#include<string.h>
struct stud{
     char name[20];
     int roll;    
};
void main()

{
    struct stud s[10];
    int a,ch,i,h,m,n,bh,new,flag=1;
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
            printf("Enter the name of students and roll no:");
            for(i=0;i<a;i++)
            {
                scanf("%s%d",s[i].name,&s[i].roll);
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
       {  flag=1;
          if (s[i].roll==new)
          {
            printf("Enter the new name");
            scanf("%s",s[i].name);
          }
          
       }
       if(!flag)
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
    }
 } while (h=5);
 
    }



