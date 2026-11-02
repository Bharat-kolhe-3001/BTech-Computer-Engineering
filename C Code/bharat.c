#include<stdio.h>
#define max 5
int Queue[max];
int front=-1,rear = -1;
void display()
{
    if(front=-1 && rear = -1){
     printf("Queue is empty");
    }
    else{
      for(int i=rear;i<front;i=(i+rear)%max){
        printf("%d",Queue[i]);
      }             
    }

}
