#include<iostream>
using namespace std;
#define Max 50  

int rear = -1;
int front = -1;
int queue[Max]; 

void addelement(int no) {
    if (rear == Max - 1) { 
        cout << "Queue is already full\n";
    } else {
        if (front == -1) 
        front = 0;  
        rear++;
        queue[rear] = no;
        cout << "Element added: " << queue[rear] << "\n";
    }
}

void deleteleftside() {  
    if (front == -1 || front > rear) {  
        cout << "Queue is empty\n";
        front=-1;
        rear=-1;
    } 
    else {
        cout << "Element deleted: " << queue[front] << "\n";
        front++;
        if (front > rear) {  
            front = rear = -1;
        }
    }
}

void deletelast() {
    if (rear == -1 || front > rear) { 
        cout << "Queue is empty\n";
        front=-1;
        rear=-1;
    } else {
        cout << "Element deleted: " << queue[rear] << "\n";
        rear--;
        if (rear < front) {  
            front = rear = -1;
        }
    }
}

int main() {
    int N, ch, no;
    cout << "Enter queue size: ";
    cin >> N;

    do {
        cout << "Menu\n1. Add Element\n2. Delete First Side\n3. Delete Last Side\n4. Exit\n";
        cin >> ch;
        switch (ch) {
        case 1:
            if (rear < N - 1) {  
                cout << "Enter number to add: ";
                cin >> no;
                addelement(no);
            } else {
                cout << "Queue is full, cannot add more elements.\n";
            }
            break;
        
        case 2:
            deleteleftside();
            break;
        
        case 3:
            deletelast();
            break;
        
        case 4:
            cout << "Exiting...\n";
            break;
        
        default:
            cout << "Wrong choice, please try again.\n";
        }
    } while (ch != 4);

    return 0;
}
