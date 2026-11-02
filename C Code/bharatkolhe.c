#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *next;
};
struct Node *rear=NULL,*front=NULL;

void enQueue(){
    struct Node *newnode = (struct Node*)malloc(sizeof(struct Node));
    if (newnode == NULL) {
        printf("Memory allocation failed\n");
    
    }
    printf("Enter data you want to push: ");
    scanf("%d", &newnode->data);
    newnode->next = NULL;

    if (rear == NULL) { 
        front = rear = newnode;
    } else {
        rear->next = newnode;
        rear = newnode;
    }
}

void deQueue(){
    if (front == NULL) {
        printf("Queue is Empty\n");
        
    }
    struct Node *temp = front;
    int x = temp->data;
    front = front->next;
    free(temp);
    if (front == NULL) { 
        rear = NULL;
    }
    printf("Dequeued Element: %d\n", x);
}

void Display() {
    if (front == NULL) {
        printf("Queue is Empty\n");
        return;
    }
    struct Node *temp = front;
    printf("Queue: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    int choice;
    do {
        printf("\nQUEUE Operation:\n1.EnQueue\n2.DeQueue\n3.DISPLAY\n4.EXIT\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                enQueue();
                break;
            case 2:
                deQueue();
                break;
            case 3:
                Display();
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice\n");
                break;
        }
    } while (choice != 4);

    return 0;
}
