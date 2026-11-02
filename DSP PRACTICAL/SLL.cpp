#include<iostream>
using namespace std;

struct node{
    node *next;
    int data;
};

node* head;


node* add(){
    node *newnode,*temp;
    int N,i;
    cout<<"How many you Want to add node";
    cin>>N;
  for( i=0;i<N;i++){

   newnode=new node;
   cout<<"Enter The data for "<<i<<"Position";
   cin>>newnode->data;
   
   if (head==NULL)
   { 
     head=newnode;
     newnode->next=NULL;
   }
   else{
    temp=head;
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->next=NULL;
    
   }

  }
  
  temp=head;
  while (temp->next!=NULL)
  {
    cout<<temp->data<<"->";
    temp=temp->next;
  }
   cout<<temp->data;
 
}
int main(){
   
   add();

    return 0;
}