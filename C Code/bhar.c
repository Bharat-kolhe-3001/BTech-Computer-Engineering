#include<stdio.h>
struct student
{
    char name[20];
    int roll_no[20];
};
void main(){
int p;
printf("Enter the choice you want  1. Insert data 2. Update data 3.Delete data  4.Display data ");
scanf("%s",p);
{

switch(p){
    case 1{
    printf("insert data size");
    scanf("%d",size);
    printf("insert your roll number size");
    scanf()

}
}
}
/*#include<stdio.h>
#include<string.h>
struct stud{
     char name[20];
     int roll;
     
     
};
void main()

{
    struct stud s[10];
    int a,ch,i,g;
    printf("enter the number of students ");
    scanf("%d",&a);
    do{
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
        {
    int rollNoToModify,numStudents;
    printf("Enter Roll No to modify: ");
    scanf("%d", &rollNoToModify);

    int foundIndex = -1;
    for (int i = 0; i < numStudents; ++i) {
        if (s[i].roll == rollNoToModify) {
            foundIndex = i;
            break;
        }
    }

    if (foundIndex != -1) {
        printf("Enter new Roll No: ");
        scanf("%d", &s[foundIndex].roll);
        printf("Enter new Name: ");
        scanf("%s", s[foundIndex].name);
        printf("Record modified successfully!\n");
    } else {
        printf("Record not found.\n");
    }
        } break;
        case 4:
        { 
            int numStudents;
             // Delete a record
                if (numStudents > 0) {
                    int rollNoToDelete;
                    printf("Enter Roll No to delete: ");
                    scanf("%d", &rollNoToDelete);

                    int foundIndex = -1;
                    for (int i = 0; i < numStudents; ++i) {
                        if (s[i].roll == rollNoToDelete) {
                            foundIndex = i;
                            break;
                        }
                    }

                    if (foundIndex != -1) {
                        // Shift records to fill the gap
                        for (int i = foundIndex; i < numStudents - 1; ++i) {
                            s[i] = s[i + 1];
                        }
                        numStudents--;
                        printf("Record deleted successfully!\n");
                    } else {
                        printf("Record not found.\n");
                    }
                } else {
                    printf("Database is empty. Cannot delete records.\n");
                }
                break;
                if{i=0;
                printf("number is delete ");
                scanf("%d\n",i);
                else{i<=0;

                }
                }
            
        }
    }
    
    printf("IF COUNTINUE PRESS 1");
    scanf("%d",&g);
   {while(g==1);
   do while(g<=1){
    
   }
   
}*/