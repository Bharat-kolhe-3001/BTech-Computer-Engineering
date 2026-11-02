#include <iostream>
using namespace std;

// Structure for a single block (node)
struct Node {
    int data;       // Number stored in the block
    Node* next;     // Pointer to the next block
};

// Function to create a new node
Node* createNode(int value) {
    Node* newNode = new Node();  // Create a new block
    newNode->data = value;       // Store the number in the block
    newNode->next = NULL;        // Initialize the pointer to NULL
    return newNode;              // Return the new block
}

// Function to create a linked list
Node* createLinkedList() {
    int size;
    cout << "How many numbers? ";
    cin >> size;

    Node* head = NULL;  // First block (starts as empty)
    Node* current = NULL;  // Pointer to the last added block

    for (int i = 0; i < size; i++) {
        int value;
        cout << "Enter number for block " << i + 1 << ": ";
        cin >> value;
   int key;
        cout<<"Enter Key for to add";
        cin>>key;

        // Create a new block
        Node* newNode = createNode(value);

        if (head == NULL) {
            head = newNode;
           
        } else {
            current->next = newNode;  // Link the last block to the new one
        }

        current = newNode;  // Move the pointer to the new block
    }

    return head;  // Return the first block
}

// Function to display the linked list
void displayLinkedList(Node* head) {
    Node* temp = head;  // Start from the first block

    cout << "Linked List: ";
    while (temp != NULL) {
        cout << temp->data << " -> ";  // Show the number
        temp = temp->next;            // Move to the next block
    }
    cout << "NULL" << endl;  // End of the list
}

int main() {
    Node* head = createLinkedList();  // Create the linked list
    displayLinkedList(head);          // Show the linked list
    return 0;
}