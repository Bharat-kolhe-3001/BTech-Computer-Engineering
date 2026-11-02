#include<stdio.h>
#include<string.h>
#define max 20
char stack[max];
int top=-1;
void push(char ele)
{
 if(top==max-1)
  {
   printf("Stack Overflow");
  }
  else
  {
   top++;
   stack[top]=ele;
  }
}

int pop()
{
 if(top<0)
 {
  printf("Stack Underflow");
 }
 else
 { 
  char x = stack[top];
  top--;
  return x;
 }
}

int isPair(char C1, char C2)
{
 if(C1=='{' && C2=='}')
 {
  return 1;
 }
 else if(C1=='[' && C2==']')
 {
  return 1;
 }
 else if(C1=='(' && C2==')')
 {
  return 1;
 }
 else
 {
  return 0;
 }
}

int isBalanced(char * text)
{
 int i;
 for(i=0;i<strlen(text);i++)
 {
  if(text[i]=='(' || text[i]=='[' || text[i]=='{')
  {
   push(text[i]);
  }
  else if(text[i]==')' || text[i]==']' || text[i]=='}')
  { 
   if(top==-1)
   {
    return 0;
   }
   
  
  else if(!isPair(pop(),text[i]))
  {
   return 0;
  }
 }}
 if(top==-1)
 {
  return 1;
 }
 else
 {
  return 0;
 }

}
void main()
{
 char text[max];
 printf("Enter the Expression: ");
 scanf("%s",text);
 
 if(isBalanced(text))
 {
  printf("Balanced");
 }
 else
 {
 printf("Unbalanced");
 }
}