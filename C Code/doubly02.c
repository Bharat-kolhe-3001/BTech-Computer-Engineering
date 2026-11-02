#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node* next;
    struct node* prev;
};

struct node* head = NULL;

void insert_atstart() {
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter the data: ");
    scanf("%d", &newnode->data);
    newnode->next = head;
    if (head != NULL)
        head->prev = newnode;
    head = newnode;
    newnode->prev = NULL;
}

void insert_atlast() {
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter the data: ");
    scanf("%d", &newnode->data);
    newnode->next = NULL;
    if (head == NULL) {
        head = newnode;
        return;
    }
    struct node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newnode;
    newnode->prev = temp;
}

void insert_after() {
    int pos, i = 1, count = 0;
    printf("Enter the position after which you want to insert: ");
    scanf("%d", &pos);

    struct node* temp = head;
    while (temp != NULL) {
        temp = temp->next;
        count++;
    }

    if (pos < 1 || pos > count) {
        printf("Invalid position\n");
        return;
    }

    temp = head;
    while (i < pos) {
        temp = temp->next;
        i++;
    }

    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter the data: ");
    scanf("%d", &newnode->data);

    newnode->next = temp->next;
    if (temp->next != NULL)
        temp->next->prev = newnode;
    temp->next = newnode;
    newnode->prev = temp;
}

void delete_first() {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }
    struct node* temp = head;
    head = head->next;
    if (head != NULL)
        head->prev = NULL;
    free(temp);
}

void delete_last() {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }
    struct node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    if (temp->prev != NULL) {
        temp->prev->next = NULL;
    } else {
        head = NULL;
    }
    free(temp);
}

void delete_atposition() {
    int pos, i = 1, count = 0;
    printf("Enter the position you want to delete: ");
    scanf("%d", &pos);

    struct node* temp = head;
    while (temp != NULL) {
        temp = temp->next;
        count++;
    }

    if (pos < 1 || pos > count) {
        printf("Invalid position\n");
        return;
    }

    temp = head;
    while (i < pos) {
        temp = temp->next;
        i++;
    }

    if (temp->prev != NULL)
        temp->prev->next = temp->next;
    else
        head = temp->next;
    if (temp->next != NULL)
        temp->next->prev = temp->prev;
    free(temp);
}

void display() {
    struct node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    int choice;
    while (1) {
        printf("\n1. Insert at Start\n2. Insert at Last\n3. Insert After Position\n4. Delete First\n5. Delete Last\n6. Delete at Position\n7. Display\n8. Exit\n");
        printf("Enter your Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                insert_atstart();
                break;
            case 2:
                insert_atlast();
                break;
            case 3:
                insert_after();
                break;
            case 4:
                delete_first();
                break;
            case 5:
                delete_last();
                break;
            case 6:
                delete_atposition();
                break;
            case 7:
                display();
                break;
            case 8:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice\n");
                break;
        }
    }
    return 0;
}
