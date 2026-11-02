#include <iostream>
using namespace std;

class Book {
public:
    int price;
    string title;

    void accept() {
        cout << "Enter Title of Book: ";
        cin >> title;
        cout << "Enter Price of Book: ";
        cin >> price;
    }

    void display() const {
        cout << "|" << title << "\t|" << price << endl;
    }
};

void displayBooks(const Book books[], int n) {
    cout << "|Title\t|Price" << endl;
    for (int i = 0; i < n; ++i) {
        books[i].display();
    }
}

void displayBooksLessThan500(const Book books[], int n) {
    cout << "Books costing less than 500:" << endl;
    cout << "|Title\t|Price" << endl;
    for (int i = 0; i < n; ++i) {
        if (books[i].price < 500) {
            books[i].display();
        }
    }
}

void displayBooksGreaterThan500(const Book books[], int n) {
    cout << "Books costing more than 500:" << endl;
    cout << "|Title\t|Price" << endl;
    for (int i = 0; i < n; ++i) {
        if (books[i].price > 500) {
            books[i].display();
        }
    }
}

void sortBooksDescending(Book books[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - 1 - i; ++j) {
            if (books[j].price < books[j + 1].price) {
                swap(books[j], books[j + 1]);
            }
        }
    }
}

int main() {
    Book books[10];
    int choice, n;

    do {
        cout << "Enter Your Choice:\n"
             << "1. Accept New Lot\n"
             << "2. Display\n"
             << "3. Display Books Less than 500\n"
             << "4. Display Books Greater Than 500\n"
             << "5. Exit\n";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter the Lot Size: ";
            cin >> n;
            for (int i = 0; i < n; ++i) {
                books[i].accept();
            }
            break;
        case 2:
            displayBooks(books, n);
            sortBooksDescending(books, n);
            cout << "Books arranged in descending order:" << endl;
            displayBooks(books, n);
            break;
        case 3:
            displayBooksLessThan500(books, n);
            break;
        case 4:
            displayBooksGreaterThan500(books, n);
            break;
        case 5:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice, please try again." << endl;
        }
    } while (choice != 5);

    return 0;
}
