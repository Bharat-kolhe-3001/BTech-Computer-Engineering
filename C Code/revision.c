#include<stdio.h>
#include<string.h>
struct stud{
     char name[20];
     int roll;
     
     
};
void main()

{
    struct stud s[10];
    int a,ch,i,k;
    printf("enter the number of students ");
    scanf("%d",&a);
    printf("MENU\n1.INSERT\n2.DISPLAY\n3.UPDATE\n4.DELETE\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        {
            printf("ENTER THE NAME OF STUDENT AND ROLL");
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
        
   
}

}
