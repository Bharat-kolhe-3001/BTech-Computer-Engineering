#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};

struct Node *head, *newnode,*temp;

struct Node* searchNode(int key) {
    struct Node* current = head;
    while (current != NULL) {
        if (current->data == key) {
            return current; 
        }
        current = current->next;
    }
    return NULL;
}

int main() {
    head = NULL;
    int ch;
    do {
        newnode = malloc(sizeof(struct Node));
        printf("Enter data for node: ");
        scanf("%d",&newnode->data);
        newnode->next = NULL;
        newnode->prev = NULL;
        
        if(head == NULL) {
            head = newnode;
            temp = newnode;
        } else {
            temp->next = newnode;
            newnode->prev = temp;
            temp = newnode;
        }
        printf("Do you want to continue yes press 1 & no press 0 n (1/0): ");
        scanf("%d", &ch);
    } while (ch == 1);
    
    printf("\nDLL is: ");
    temp = head;
    while(temp != NULL) {
        printf("%d ",temp->data);
        temp = temp->next;
    }
    
    int key;
    printf("\nEnter the value to search: ");
    scanf("%d", &key);
    struct Node* foundNode = searchNode(key);
    if (foundNode != NULL) {
        printf("Node with value %d found.\n", key);
    } else {
        printf("Node with value %d not found.\n", key);
    }

    return 0;
}