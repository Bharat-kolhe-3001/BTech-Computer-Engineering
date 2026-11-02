// #include<iostream>
// using namespace std;
// struct node{

//     node *Next;
//     int data;


// node *insert_(){
    
//    cout<<"Enter Data For node";

   
//     node*New_node,*head,*temp;
//     New_node->Next = data
//         head=New_node;
//         New_node->Next->data;

//     }
 
// }
// };
#include<iostream>
using namespace std;

struct Node {
    int data;          
    Node* next;           
};

Node* insert(Node* head) {
    int value;
    cout << "Enter data for node: ";
    cin >> value;

   
    Node* newNode = new Node();
    newNode = head; 

    newNode->data = value;
 
}


void display(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = nullptr; // Initialize head as null

    int n;
    cout << "Enter the number of nodes to insert: ";
    cin >> n;

    // Insert nodes
    for (int i = 0; i < n; i++) {
        head = insert(head);
    }

    // Display the linked list
    display(head);

    return 0;
}
