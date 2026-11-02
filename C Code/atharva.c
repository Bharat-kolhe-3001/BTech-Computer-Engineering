#include<stdio.h>
#include<string.h>
struct student{
   char name[20];
   int rollno;
}s[10];

int main() {
int a,g,o;
int n=0;
printf("Enter Number of Student ");
scanf("%d",&a);
for(int i=0;i<a;i++){
printf("enter your name ");
scanf("%s",s[i].name);
printf("enter your roll number");
scanf("%d",s[i].rollno);
}
printf("Operation menu : \n1.Inseration of a Record\n2.deletion of record\n3.modification of record\n4.display record");
printf("enter you choice ");
scanf("%d",&g);
switch(g){
case 1 : 
printf("enter new record");
printf("Enter Number of Students data to been inserated ");
scanf("%d",&f);
for(int i=0;i<f;i++){
printf("enter your name ");
scanf("%s",s[i].name);
printf("enter your roll number");
scanf("%d",s[i].rollno);

}
printf("%d students record updated",f);
break;
case 2:
printf("enter your Roll number");
scanf("%d",&o);
for(int i=0;i<a;i++){
if(o==s[i].rollno){
n++;
}
else{
printf("invalid roll no");
}
if(n!=0){

}








}
}
