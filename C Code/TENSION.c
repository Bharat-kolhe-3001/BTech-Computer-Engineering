#include <stdio.h>
int stack[100];
int top = -1;
int isFull(int max_size) {
    return top == max_size - 1;
}
int isEmpty() {
    return top == -1;
}
int main() {
    int choice, item;
    int max_size = 100; 

    while (1) {
        printf("\n1. Push\n");
        printf("2. Pop\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (!isFull(max_size)) {
                    printf("Enter element to push: ");
                    scanf("%d", &item);
                    top++;
                    if (top < max_size)
                        stack[top] = item;
                    else
                        printf("Stack Overflow!\n");
                } else {
                    printf("Stack Overflow!\n");
                }
                break;

            case 2:
                if (!isEmpty()) {
                    item = stack[top];
                    top--;
                    printf("Popped element: %d\n", item);
                } else {
                    printf("Stack Underflow!\n");
                }
                break;

            case 3:
                printf("Exiting program.\n");
                return 0;

            default:
                printf("Invalid choice!\n");
                break;
        }
    }

    return 0;
}
