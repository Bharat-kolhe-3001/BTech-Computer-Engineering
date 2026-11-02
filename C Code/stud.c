#include<stdio.h>
#include<string.h>
struct student
{
    char Name[20];
    int rollno;
};
void main()
{
    int ch,size,i,j,index,new,flag,up,Delete,b,a=0;
    struct student s[20];
    
    do{
        printf("\nEnter the choice you want\n 1.Insert the data\n 2.Display the data\n 3.Update the Data\n 4.Delete the Data\n 5.Extend the data \n 6.Exit\n");
        scanf("%d",&ch);
        
        switch (ch)
        {
        case 1:

            printf("\nWhat is the no. of students data you want to enter: ");
            scanf("%d",&size);
    
            
            for ( i = a; i < size; i++)
            {
                printf("\nEnter the name ");
                scanf("%s",s[i].Name);
                printf("Enter the roll no: ");
                scanf("%d",&s[i].rollno);
            }
             
             

            break;
        
        case 2:
             
             for ( i = 0; i < size+a; i++)
             {
                printf("Name is %s and roll no. is %d \n",s[i].Name,s[i].rollno);
             }
             break;

        case 3:
               printf("Enter what to change\n 1.Roll No.\n 2.Name");
               scanf("%d",&up);
               
               switch (up)
               {
                
               case 1:
               flag=1;
               printf("Enter the roll no. you want to update ");
               scanf("%d",&new);
               for ( i = 0; i < size; i++)
               {  
                if(s[i].rollno==new)
                {   flag=0;
                    printf("Enter the new roll no. \n");
                    scanf("%d",&s[i].rollno);
                    break;
                }
                 
               }
               if(flag==1)
               {
                printf("Invalid Roll no.");
               }
               
               
                break;

                case 2:
                flag=1;
                printf("Enter the roll no. of name you want to change ");
                scanf("%d",&new);

                for ( i = 0; i < size; i++)
               {
                if(s[i].rollno==new)
                {   flag=0;
                    printf("Enter the new Name \n");
                    scanf("%s",s[i].Name);
                    break;
                }
              
                }  if(flag==1)
               {
                printf("Invalid Roll no.");
               }
               
                break;

               
               default:
               printf("Invalid Choice");
                break;
               }
               break;

            case 4:
             b=1;
            printf("Enter the roll no. you want to delete ");
            scanf("%d",&Delete);flag=1; 
            for(i=0;i<size;i++)
            {   
                if(s[i].rollno==Delete)
                {   b=0;
                    for(j=i;j<size;j++)
                   {
                   strcpy(s[j].Name,s[j+1].Name);
                    s[j].rollno=s[j+1].rollno;
                    
                   }
                  size--;}
            }  if(b==1)
               {
                printf("Invalid Roll no.");
               }
            
             break;

        case 5:
        printf("Enter no. of extended data ");
        scanf("%d",&a);
       int j=1;
        for ( i = size; i < size+a; i++)
            {  
                if(size+a<=20)
               { printf("\nEnter the name ");
                scanf("%s",s[i].Name);
                printf("Enter the roll no: ");
                scanf("%d",&s[i].rollno);
               }
               else{printf("Size is full");}
            } 
        }
    }while (ch!=6);
   
    }
   

