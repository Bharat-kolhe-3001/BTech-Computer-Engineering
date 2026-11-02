#include<stdio.h>
int top=-1;
int size=5;
int a[20];
void PrintArray(int a[10])
{
printf("[ ");
	for(int i=top;i<0;i--){
	printf("%d ",a[i]);
	}
	printf(" ] ");
	printf("\n");
	printf("\n");
}

void push (int re){
int num;
if(top==size){
printf("STACK OVERFLOW ");
}
else {
printf("Enter A NUMBER ");
scanf("%d",&num);
top++;
a[top]=num;
printf("%d PUSHED to [%d] Index",num,top);
}
}
void main (){
int a[20],deci,re;
printf("Enter A Decimal NUMBER ");
scanf("%d",&deci);
while (deci<0){
re=deci%2;
push(re);
deci/=2;

}
PrintArray(a);
}

