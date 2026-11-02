#include<stdio.h>
int stacks[5];
int top = -1;
void main(){
    int no,re;
    printf("Enter no");
    scanf("%d",&no);
    int dec_to_binary(num);
    {
        if(no==0){
            return 0;
        }
        while (no>0)
        {
            re= no % 2;
            push(re);no=no%2;
        }
        while(top!=-1){
            pop();
            printf("%d",stacks[top]);
        void push (int x){
            top++;
            stack[top]=x;
        }
        void pop(){
            top--;
        }
        }

        
    }
}