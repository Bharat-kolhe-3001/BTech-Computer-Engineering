#include<iostream>
using namespace std;
struct node{
    int data;
    node *next;
};
node* getdat(){
    node *newnode;
    newnode=new node;
    return newnode;
    }
    node *createlinklist(){
        node *head,*newnode;
        int size;
        node *head=NULL;
        node *currentnode;
        cout<<"Enter the size of link list";
        cin>>size;
        for(int i=0;i<size;i++){
            newnode=getdat();
              cout<<"Enter Data For this node";
              cin>>newnode->data;

              newnode->next=head;
              head=newnode;
        }
        return head;
    }
    node *dispaly(node* head){
        node *temp,*head;
        temp=head;
        while(temp!=NULL){
            cout<<temp->data;
            cout<<"->";
            temp=temp->next;
        }
    }
int main(){
    node *head=createlinklist();
    *dispaly(head);
    return 0;
}