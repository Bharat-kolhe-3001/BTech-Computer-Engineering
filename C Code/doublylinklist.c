#include<stdio.h>
struct node{
    int data;
    struct node*next;
    struct node*prev;
};
struct node*head,*temp;
void insert_atstart(){
    temp=head;
    newnode=malloc(struct of(struct node));
    printf("enter the data");
    scanf("%d",&newnode->data);
    newnode->next=temp;
    temp->prev=newnode;
    head = newnode;
    newnode->prev = null;
}
void inser_atlast(){
    newnode=malloc(struct of(struct node));
    printf("Enter thr data");
    scanf("%d",&newnode->data);
    temp = head;
    while(temp->next!=null){
        temp = temp->next;
    }
    temp->next = newnode;
    newnode->prev=temp;
    newnode->next=null;
}
 void insert_after(){
  int pos,i=1,count=0;
  temp=head;
  while (temp!=NULL)
  {
    temp = temp->next;
    count++;

  }
  printf("Enter The pos After which you wnat to delete");
  scanf("%d",&pos);

  if(pos<1 || pos>count){
    printf("Invalid choice");
  }
  else{
     newnode=malloc(struct of(struct node));
      printf("Enter thr data");
    scanf("%d",&newnode->data);
    temp = head;
    while(i<pos){
        temp= temp->next;
        i++
    }
    newnode->next = temp->next;
    newnode->prev = temp;
    temp ->next ->prev = newnode;
  }
  void delete_first(){
    if(head=null)
    {
        printf("node is empty");
    
    }
    else{
        temp = head;
        head = head->next;
        head->prev=null;
        free(temp);
    }
  }
  void delete_last(){
    struct node*nextnoe;
    if(head = null){
        printf("empty")
    }
    else{
        temp=head;
    }
    while(temp ->next!=null){
        temp=temp->next;
        nextnode=temp->next;

    }
    temp ->next = null;
    free(next mode)
  }
  void delete_atpostion(){
    int i=1,count=0,pos;
    temp=head;
    while (temp!=null){
        temp = temp->next;
        count++;
    }
    printf("Enetr the postion from wheare ypu want to delete ");
    scanf("%d",&pos);
    if(pos<1 || pos>count){
        printf("Inavali choice")
    }
    else
    {
      team=head;
      while(i<pos-1){
        temp=temp->next;
        temp->next = nextnode->next;
        nextnode->next->prev=temp;
        free(temp);
      }
    }
    
  }  
 }