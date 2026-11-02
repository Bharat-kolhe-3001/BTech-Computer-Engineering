#include <stdio.h>//03.04.2024

int top = -1;
int size = 5;

void push(int a[20]) {
    int num;
    if (top == size - 1) {
        printf("Stack overflow\n");
    } else {
        printf("Enter a number: ");
        scanf("%d", &num);
        top++;
        a[top] = num;
        printf("%d pushed to [%d] position\n", num, top);
    }
}

void pop(int a[20]) {
    if (top < 0) {
        printf("Stack underflow\n");
    } else {
        printf("Number deleted: %d\n", a[top]);
        top--;
    }
}

int isFull() {
    if (top == size - 1) {
        return 1;
    } else {
        return 0;
    }
}

int isEmpty() {
    if (top == -1) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int a[30], Choice;
    do {
        printf("STACK OPERATION\n1. PUSH\n2. POP\n3. Check if Empty\n4. Check if Full\n5. Display\n6. Exit\n");
        scanf("%d", &Choice);
        switch (Choice) {
            case 1:
                if (isFull()) {
                    printf("Stack is full. Cannot push.\n");
                } else {
                    push(a);
                }
                break;
            case 2:
                if (isEmpty()) {
                    printf("Stack is empty. Cannot pop.\n");
                } else {
                    pop(a);
                }
                break;
            case 3:
                if (isEmpty()) {
                    printf("Stack is empty\n");
                } else {
                    printf("Stack is not empty\n");
                }
                break;
            case 4:
                if (isFull()) {
                    printf("Stack is full\n");
                } else {
                    printf("Stack is not full\n");
                }
                break;
            case 5:
                if (isEmpty()) {
                    printf("Stack is empty\n");
                } else {
                    printf("Elements in the stack are:\n");
                    for (int i = 0; i <= top; i++) {
                        printf("%d\n", a[i]);
                    }
                }
                break;
        }
    } while (Choice != 6);
    return 0;
}
