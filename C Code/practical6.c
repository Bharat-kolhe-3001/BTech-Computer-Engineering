#include<stdio.h>
int top=-1;
int size=5;
void push (int a[10]){
int num;
if(top==size){
printf("stack overflow");
}
else {
printf("Enter a number ");
scanf("%d",&num);
a[top]=num;
top++;
printf("%d push to [%d] Index",num,top);

}
}
void pop(int a[10]){
if(top<0){
 printf("STCK UNDERFLOW !!!!");
}
else {
printf("Number TO DELETED is %d",a[top]);
top--;
}
}
int Full(){
if(top==size ){
return 0;
}
}
int Empty(){
if(top==-1){
return 1;
}
}
void main (){
int a[20],Choice,W;
do{
printf("STACK OPERATION Menu\n1.PUSH\n2.POP\n3.CHECK UNDERFLOW\n4.CHECK OVERFLOW\n5.EXICT\n");
scanf("%d",&Choice );
int full_v=Full();
int epty_v=Empty();
switch(Choice){
case 1 : push(a);
break;
case 2 : pop(a);
break;
case 3 : 

    if(epty_v==1)
   {
   printf("STACK EMPTY\n");
   }
   else {
   printf("Some ELEMENT are Present\n");
   }
break;
case 4 :
    if(full_v==0)
   {
   printf("STACK FULL\n");
   }
   else {
   printf("STACK is NOT FULL\n");
   }
 break;
 default : printf("Invalid CHOICE\n");
}

}while (W==5);
}
