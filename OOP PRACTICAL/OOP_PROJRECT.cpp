#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class LibraryItem {
protected:
    string title;
    string author;

public:
    LibraryItem() : title(""), author("") {} // Simple constructor
    LibraryItem(string t, string a) : title(t), author(a) {} 

    virtual void display() = 0; // Pure virtual function
    string getTitle() { return title; }
    string getAuthor() { return author; }
};

// Derived class Book
class Book : public LibraryItem {
    int stock;

public:
    Book() : LibraryItem(), stock(0) {} 
    Book(string t, string a, int s) : LibraryItem(t, a), stock(s) {}

    void inputBook() {
        cout << "Enter book title: ";
        cin >> ws;
        getline(cin, title);
        cout << "Enter author name: ";
        getline(cin, author);
        cout << "Enter stock quantity: ";
        cin >> stock;
    }

    void display() override {
        cout << "| " << setw(20) << left << title
             << "| " << setw(20) << left << author
             << "| " << setw(10) << left << stock << " |\n";
    }

    void updateStock(int newStock) {
        stock = newStock;
        cout << "Stock updated successfully.\n";
    }

    int getStock() { return stock; }
};

void teacherMenu(Book books[], int &count);
void studentMenu(Book books[], int count);

int main() {
    Book books[50];
    int count = 0, choice;

    do {
        cout << "\nLibrary Management System\n1. Teacher\n2. Student\n9. Exit\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                teacherMenu(books, count);
                break;
            }
            case 2: {
                studentMenu(books, count);
                break;
            }
            case 9:
                cout << "Exiting... Thank you!\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 9);

    return 0;
}

void teacherMenu(Book books[], int &count) {
    int choice;
    do {
        cout << "\n1. Add Book\n2. Update Stock\n3. Show All Books\n9. Back to Main Menu\nEnter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                if (count < 50) {
                    cout << "\nAdding new book:\n";
                    books[count].inputBook();
                    count++;
                } else {
                    cout << "Inventory is full, cannot add more books.\n";
                }
                break;
            }
            case 2: {
                string title;
                cout << "Enter book title to update stock: ";
                cin >> ws;
                getline(cin, title);

                bool found = false;
                for (int i = 0; i < count; i++) {
                    if (books[i].getTitle() == title) {
                        int newStock;
                        cout << "Enter new stock quantity: ";
                        cin >> newStock;
                        books[i].updateStock(newStock);
                        found = true;
                        break;
                    }
                }
                if (!found) cout << "Book not found in the inventory.\n";
                break;
            }
            case 3:
                cout << "\n+----------------------+----------------------+----------+\n";
                cout << "| " << setw(20) << left << "Title"
                     << "| " << setw(20) << left << "Author"
                     << "| " << setw(10) << left << "Stock" << " |\n";
                cout << "+----------------------+----------------------+----------+\n";
                for (int i = 0; i < count; i++) {
                    books[i].display();
                }
                cout << "+----------------------+----------------------+----------+\n";
                break;
            case 9:
                cout << "Returning to main menu...\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 9);
}

void studentMenu(Book books[], int count) {
    int choice;
    do {
        cout << "\n1. Borrow Book\n2. Return Book\n3. Show All Books\n9. Back to Main Menu\nEnter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                string title;
                cout << "Enter title of book to borrow: ";
                cin >> ws;
                getline(cin, title);

                bool found = false;
                for (int i = 0; i < count; i++) {
                    if (books[i].getTitle() == title && books[i].getStock() > 0) {
                        books[i].updateStock(books[i].getStock() - 1);
                        cout << "Book borrowed successfully.\n";
                        found = true;
                        break;
                    }
                }
                if (!found) cout << "Book not available or out of stock.\n";
                break;
            }
            case 2: {
                string title;
                cout << "Enter title of book to return: ";
                cin >> ws;
                getline(cin, title);

                bool found = false;
                for (int i = 0; i < count; i++) {
                    if (books[i].getTitle() == title) {
                        books[i].updateStock(books[i].getStock() + 1);
                        cout << "Book returned successfully.\n";
                        found = true;
                        break;
                    }
                }
                if (!found) cout << "Book not found in the inventory.\n";
                break;
            }
            case 3:
                cout << "\n+----------------------+----------------------+----------+\n";
                cout << "| " << setw(20) << left << "Title"
                     << "| " << setw(20) << left << "Author"
                     << "| " << setw(10) << left << "Stock" << " |\n";
                cout << "+----------------------+----------------------+----------+\n";
                for (int i = 0; i < count; i++) {
                    books[i].display();
                }
                cout << "+----------------------+----------------------+----------+\n";
                break;
            case 9:
                cout << "Returning to main menu...\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 9);
}
