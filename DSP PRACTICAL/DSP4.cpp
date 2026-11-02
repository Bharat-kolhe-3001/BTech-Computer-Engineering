#include <iostream>
#include <cstring>  
using namespace std;

char stack[30];  
int top = -1;  

void push(char c) {
    if (top == 29) {
        cout << "Stack Overflow!" << endl;
    } else {
        top++;
        stack[top] = c;
    }
}

char pop() {
    if (top == -1) {
        cout << "Stack Underflow!" << endl;
       
    } else {
        return stack[top--];  
    }
}

int main() {
    char input[40];  
    char cleaned[40];  
    int length, cleanIndex = 0;

    cout << "Enter the statement: ";
    cin.getline(input, 40); 

    length = strlen(input);  

   
    for (int i = 0; i < length; i++) {
        if (input[i] >= 'A' && input[i] <= 'Z') {
            input[i] = input[i] + 32;  
        }
        if (input[i] >= 'a' && input[i] <= 'z') {
            cleaned[cleanIndex] = input[i];  
            cleanIndex++;
            push(input[i]);  
        }
    }
    int isPalindrome = 1;
    for (int i = 0; i < cleanIndex; i++) {
        if (pop() != cleaned[i]) {
            isPalindrome = 0; 
            break;
        }
    }

    if (isPalindrome) {
        cout << "\nPalindrome!" << endl;
    } else {
        cout << "\nNot a Palindrome!" << endl;
    }

    return 0;
}