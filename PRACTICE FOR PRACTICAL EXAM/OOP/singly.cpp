#include <iostream>
using namespace std;

// Structure to represent a node in the linked list
struct Node {
    int data;        // Data stored in the node
    Node* next;      // Pointer to the next node
};

// Function to add a new node at the end of the linked list
void addNodeToEnd(Node*& head, int newData) {
    Node* newNode = new Node;  // Create a new node
    newNode->data = newData;   // Assign data to the new node
    newNode->next = NULL;      // Set the next pointer to NULL

    if (head == NULL) {        // If the list is empty
        head = newNode;        // Make the new node the head
    } else {
        Node* currentNode = head;
        while (currentNode->next != NULL) {  // Traverse to the last node
            currentNode = currentNode->next;
        }
        currentNode->next = newNode;  // Link the last node to the new node
    }
}

// Function to display the entire linked list
void displayLinkedList(Node* head) {
    if (head == NULL) {
        cout << "The linked list is empty." << endl;
        return;
    }

    Node* currentNode = head;
    while (currentNode != NULL) {  // Traverse through the list
        cout << currentNode->data << " -> ";
        currentNode = currentNode->next;
    }
    cout << "NULL" << endl;  // Mark the end of the list
}

int main() {
    Node* head = NULL;  // Initialize the head pointer
    int totalNodes, nodeData;

    cout << "Enter the number of nodes you want to create: ";
    cin >> totalNodes;

    for (int i = 0; i < totalNodes; i++) {
        cout << "Enter data for node " << (i + 1) << ": ";
        cin >> nodeData;
        addNodeToEnd(head, nodeData);  // Add a node to the list
    }

    cout << "The linked list is: ";
    displayLinkedList(head);  // Display the entire linked list

    return 0;
}
