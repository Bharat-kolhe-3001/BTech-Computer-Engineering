#include<stdio.h>
int stacks[5];
int top=-1;
void push(){
    int x;
    printf("Enter a no");
    scanf("%d",&x);
    if(top==stacks[5] - 1){
        printf("stacks is  overflow");
    }
    else{
        top++;
        stacks[top]=x;
        }
}
void peek(){
    if(top==-1){
        printf("stacks is emity");
    }
    else{
        printf("%d",stacks[top]);
    }
}