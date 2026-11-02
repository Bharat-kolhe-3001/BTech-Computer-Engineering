#include <iostream>
using namespace std;

struct node {
    int data;
    node *next;
};

node* get_node() {
    node *newnode = new node;
    newnode->next = NULL;
    return newnode;
}

node* creation(int N) {
    node *head = NULL, *temp = NULL;

    for (int i = 0; i < N; i++) {
        node *newnode = get_node();
        cout << "Enter data for node " << (i + 1) << ": ";
        cin >> newnode->data;

        if (head == NULL) {
            head = newnode;
            temp = head;
        } else {
            temp->next = newnode;
            temp = newnode;
        }
    }
    return head;
}

void display(node *head) {
    if (head == NULL) {
        cout << "No data found" << endl;
        return;
    }

    node *temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    int N;
    cout << "How many nodes are there? ";
    cin >> N;

    node *head = creation(N);
    cout << "The linked list is: ";
    display(head);

    return 0;
}