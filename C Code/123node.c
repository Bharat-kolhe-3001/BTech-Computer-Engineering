#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main() {
    struct Node* head = NULL;
    
    // Creating the first node
    struct Node* new_node1 = (struct Node*)malloc(sizeof(struct Node));
    new_node1->data = 100;
    new_node1->next = NULL;
    head = new_node1;

    // Creating the second node
    struct Node* new_node2 = (struct Node*)malloc(sizeof(struct Node));
    new_node2->data = 200;
    new_node2->next = NULL;
    new_node1->next = new_node2;

    // Creating the third node
    struct Node* new_node3 = (struct Node*)malloc(sizeof(struct Node));
    new_node3->data = 300;
    new_node3->next = NULL;
    new_node2->next = new_node3;

    // Printing the data in all nodes
    struct Node* current = head;
    while (current != NULL) {
        printf("%d\n", current->data);
        current = current->next;
    }

    return 0;
}
