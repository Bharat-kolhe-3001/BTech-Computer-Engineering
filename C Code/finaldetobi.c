#include <stdio.h>

#define MAX_SIZE 5

int stacks[MAX_SIZE];
int top = -1;

void push(int x);
int pop();

int main() {
    int no;
    printf("Enter a number: ");
    scanf("%d", &no);

    if (no == 0) {
        printf("This is the not convert to binary form:");
        return 0;
    }

    while (no > 0) {
        int re = no % 2;
        push(re);
        no = no / 2;
    }

    printf("Binary no: ");
    while (top != -1) {
        printf("%d", pop());
    }
    printf("\n");

    return 0;
}

void push(int x) {
    if (top == MAX_SIZE - 1) {
        printf("Stack Overflow\n");
        return;
    }
    top++;
    stacks[top] = x;
}

int pop() {
    int temp = stacks[top];
    top--;
    return temp;
}
