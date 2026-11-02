#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

class Book {
    string title;
    string author;
    string publisher;
    int price;
    int stock;

public:
    void accept() {
        cout << "Enter book Title: ";
        cin >> title;
        cout << "Enter the Author name: ";
        cin >> author;
        cout << "Enter Publisher name: ";
        cin >> publisher;
        cout << "Enter the Price of the book: ";
        cin >> price;
        cout << "Enter Stock position: ";
        cin >> stock;
    }

    void display() {
        cout << "| " << setw(20) << left << title
             << "| " << setw(20) << left << author
             << "| " << setw(10) << left << price
             << "| " << setw(20) << left << publisher
             << "| " << setw(10) << left << stock << " |\n";
    }

    void buyBook() {
        int copies;
        cout << "Enter the number of copies required: ";
        cin >> copies;

        if (copies <= stock) {
            cout << "Total cost: " << (copies * price) << "\n";
            stock -= copies;
        } else {
            cout << "Required copies not in stock.\n";
        }
    }

    string getTitle() const {
        return title;
    }

    string getAuthor() const {
        return author;
    }
};

int main() {
    int size, choice;
    Book books[50];  // Fixed-size array of books
    string searchTitle, searchAuthor;

    cout << "Enter the number of books in the inventory: ";
    cin >> size;

    do {
        cout << "\n1. Enter book details\n2. Display all books\n3. Search and buy a book\n4. Sort by cost\n5. Exit\n";
        cin >> choice;

        switch (choice) {
            case 1:
                for (int i = 0; i < size; i++) {
                    books[i].accept();
                }
                break;

            case 2:
                if (size == 0) {
                    cout << "No books in the inventory. Please add books first.\n";
                } else {
                    cout << "\n+------------------------------------------------------------------------------------------\n";
                    cout << "| " << setw(20) << left << "Title"
                         << "| " << setw(20) << left << "Author"
                         << "| " << setw(10) << left << "Price"
                         << "| " << setw(20) << left << "Publisher"
                         << "| " << setw(10) << left << "Stock" << " |\n";
                    cout << "+------------------------------------------------------------------------------------------\n";

                    for (int i = 0; i < size; i++) {
                        books[i].display();
                    }

                    cout << "+------------------------------------------------------------------------------------------\n";
                }
                break;

            case 3:
                cout << "Enter book Title to search: ";
                cin >> searchTitle;
                cout << "Enter Author name to search: ";
                cin >> searchAuthor;

                for (int i = 0; i < size; i++) {
                    if (books[i].getTitle() == searchTitle && books[i].getAuthor() == searchAuthor) {
                        books[i].display();
                        books[i].buyBook();
                        break;
                    }
                }

                if (size == 0) {
                    cout << "Book not found.\n";
                }
                break;

            case 4:
                for (int i = 0; i < size - 1; i++) {
                    for (int j = i + 1; j < size; j++) {
                        if (books[i].getTitle() < books[j].getTitle()) {
                            swap(books[i], books[j]);
                        }
                    }
                }

                cout << "Books sorted by title (descending order):\n";
                cout << "+------------------------------------------------------------------------------------------\n";
                cout << "| " << setw(20) << left << "Title"
                     << "| " << setw(20) << left << "Author"
                     << "| " << setw(10) << left << "Price"
                     << "| " << setw(20) << left << "Publisher"
                     << "| " << setw(10) << left << "Stock" << " |\n";
                cout << "+------------------------------------------------------------------------------------------\n";

                for (int i = 0; i < size; i++) {
                    books[i].display();
                }

                cout << "+------------------------------------------------------------------------------------------\n";
                break;

            case 5:
                cout << "Exiting... Thank you!\n";
                break;

            default:
                cout << "Invalid choice. Please enter again...\n";
        }
    } while (choice != 5);

    return 0;
}