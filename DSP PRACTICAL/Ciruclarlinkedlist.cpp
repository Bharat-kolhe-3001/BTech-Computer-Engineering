#include<iostream>
using namespace std;
struct node{
    node* next;
    int data;
};

node *create_node(){
   node *temp;
   temp = new node;
   temp->next=NULL;
}
node* allnode(){
    node *head,*temp;
    node* newnode = create_node();
    int size;
    cout<<"Enter data for insert at head linked list";
    cin>>size;
for(int i=0;i<size;i++){
    cout<<"Enter Data";
    cin>>newnode->data;
 if(head==NULL){
    head=newnode;
    newnode->next = head;
    }
    else{
        temp=head;
        ;

    }
}
   

}
