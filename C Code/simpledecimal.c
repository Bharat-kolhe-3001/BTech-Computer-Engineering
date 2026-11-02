#include <stdio.h>

#define MAX_SIZE 5

int stacks[MAX_SIZE];
int top = -1;

int main() {
    int no;
    printf("Enter a number: ");
    scanf("%d", &no);

    if (no == 0) {
        printf("Binary equivalent: 0\n");
        return 0;
    }

    while (no > 0) {
        int re = no % 2;
        
        if (top == MAX_SIZE - 1) {
            printf("Stack Overflow\n");
            return -1;
        }
        
        top++;
        stacks[top] = re;
        no = no / 2;
    }

    printf("Binary equivalent: ");
    while (top != -1) {
        int bit = stacks[top];
        printf("%d", bit);
        top--;
    }
    printf("\n");
    void pop()

    return 0;
}
