#include <stdio.h>
#include <stdlib.h>

// Define a node structure for the doubly linked list
struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

// Function to search for a node in the doubly linked list
struct Node* searchNode(struct Node* head, int key) {
    struct Node* current = head;

    // Traverse the list until the key is found or the end of the list is reached
    while (current != NULL) {
        if (current->data == key) {
            return current; // Key found, return the node
        }
        current = current->next;
    }

    // If key is not found, return NULL
    return NULL;
}

// Function to print the doubly linked list
void printList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main() {
    // Create a sample doubly linked list: 1 <-> 2 <-> 3 <-> 4 <-> 5
    struct Node* head = createNode(1);
    head->next = createNode(2);
    head->next->prev = head;
    head->next->next = createNode(3);
    head->next->next->prev = head->next;
    head->next->next->next = createNode(4);
    head->next->next->next->prev = head->next->next;
    head->next->next->next->next = createNode(5);
    head->next->next->next->next->prev = head->next->next->next;

    // Print the original list
    printf("Original List: ");
    printList(head);

    // Search for a node with key 3
    int key = 3;
    struct Node* foundNode = searchNode(head, key);
    if (foundNode != NULL) {
        printf("Node with key %d found.\n", key);
    } else {
        printf("Node with key %d not found.\n", key);
    }

    // Search for a node with key 6
    key = 6;
    foundNode = searchNode(head, key);
    if (foundNode != NULL) {
        printf("Node with key %d found.\n", key);
    } else {
        printf("Node with key %d not found.\n", key);
    }

    return 0;
}
