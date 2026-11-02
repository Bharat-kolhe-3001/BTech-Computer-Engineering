#include<stdio.h>
struct node{
    int data;
    struct node *next;
};
struct node *head,*newnode;
void insertatfirst(){
  head = NULL;
 newnode = malloc(sizeof(struct node));
  printf("Enter Data");
  scanf("%d",newnode->data);
  if(head = NULL){
    head = newnode;
    newnode->next = NULL;
  } 
  else{
    head->next = newnode->next;
    head= newnode;
  }

}

void display(){
    struct node *temp;
    temp=head;
    while (temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
}

int main()
{
    insertatfirst();
    insertatfirst();
    insertatfirst();
    display();
    return 0;
}