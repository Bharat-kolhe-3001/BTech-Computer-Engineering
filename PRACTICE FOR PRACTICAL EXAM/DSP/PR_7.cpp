#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
};

// Function to create a new node
node* getnode() {
    node* newnode = new node; // Allocate memory for a new node
    cout << "Enter data for this node: ";
    cin >> newnode->data;
    newnode->next = NULL; // Initialize the next pointer as NULL
    return newnode;
}

// Function to create a linked list
node* createLinkedList() {
    node *head = NULL, *temp = NULL; // Initialize pointers
    char choice;

    do {
        node* newnode = getnode(); // Create a new node

        if (head == NULL) { // If the list is empty
            head = newnode; // Set the first node as the head
            temp = newnode; // Initialize temp to the first node
        } else {
            temp->next = newnode; // Link the new node to the list
            temp = newnode;       // Move temp to the new node
        }

        cout << "Do you want to add another node? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y'); // Continue until the user chooses not to add more nodes

    return head;
}

// Function to display the linked list
void displayLinkedList(node* head) {
    if (head == NULL) {
        cout << "The linked list is empty." << endl;
        return;
    }

    cout << "The linked list is: ";
    node* temp = head; // Start at the head of the list
    while (temp != NULL) { // Traverse until the end of the list
        cout << temp->data << " -> ";
        temp = temp->next; // Move to the next node
    }
    cout << "NULL" << endl;
}

int main() {
    node* head = createLinkedList(); // Create the linked list
    displayLinkedList(head);         // Display the linked list
    return 0;
}
