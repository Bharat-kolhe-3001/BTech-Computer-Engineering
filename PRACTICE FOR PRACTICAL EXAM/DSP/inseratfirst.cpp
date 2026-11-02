#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;
};
node* get_node(){
    node* newnode;
    newnode=new node;
    cout<<"Enter The Data for this node";
    cin>>newnode->data;
    newnode->next=NULL;
    return newnode;
}
node *createnode(){
    node* temp,*head,*newnode;
    newnode=get_node();
    head=NULL;
    if(head==NULL){
        head=newnode;
        newnode=temp;
    }
    else{
        temp->next=newnode;
        temp=newnode;
    }
    return head; 
}
node *dispaly(node *head){
    node *temp;
    if(head==NULL){
        cout<<"No link list avialble";
    }
    temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
}
int main(){

    node *head=createnode();
    dispaly(head);
}