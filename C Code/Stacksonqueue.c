#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *top = NULL;

void push() {
    struct Node *newnode; 
    newnode = (struct Node*)malloc(sizeof(struct Node));
    if (newnode == NULL) {
        printf("Failed");
            }
    printf("Enter data you want to push: ");
    scanf("%d", &newnode->data);
    newnode->next = top;
    top = newnode;
}

void pop() {
    if (top == NULL) {
        printf("STACK UNDERFLOW !!!\n");
        return;
    }
    int x = top->data;
    struct Node *temp = top;
    top = top->next;
    free(temp);
    printf("Popped Element: %d\n", x);
}

void display() {
    if (top == NULL) {
        printf("Stack is Empty\n");
        return;
    }
    struct Node *temp = top;
    printf("Stack: [ ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("]\n");
}

int main() {
    int choice;
    do {
        printf("\nSTACK Operation:\n1. PUSH\n2. POP\n3. DISPLAY\n4. EXIT\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                push();
                break;
            case 2:
                pop();   
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Operation Ended !!!\n");
                break;
            default:
                printf("Invalid Choice\n");
                break;
        }
    } while (choice != 4);

    return 0;
}
