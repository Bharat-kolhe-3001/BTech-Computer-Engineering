#include <stdio.h>

#define MAX_SIZE 5

int stacks[MAX_SIZE];
int top = -1;

void push(int x);
int pop();

void push(int x) {
    if (top == MAX_SIZE - 1) {
        printf("Stack Overflow\n");
        return;
    }
    top++;
    stacks[top] = x;
}

int pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
        return -1;
    }
    int temp = stacks[top];
    top--;
    return temp;
}

int main() {
    int choice;
    printf("Enter 1 for push, 2 for pop, or any other number to exit: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            {
                int no;
                printf("Enter a number to push: ");
                scanf("%d", &no);
                push(no);
            }
            break;
        case 2:
            {
                int popped = pop();
                if (popped != -1)
                    printf("Popped element: %d\n", popped);
            }
            break;
        default:
            printf("Exiting...\n");
            return 0;
    }

    return 0;
}
