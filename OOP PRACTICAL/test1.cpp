#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>
using namespace std;

// Book Class
class Book {
    string title;
    string author;
    string isbn;
    int stock;
    int borrowedCount;

public:
    // Constructor
    Book(string t = "", string a = "", string i = "", int s = 0, int b = 0)
        : title(t), author(a), isbn(i), stock(s), borrowedCount(b) {}

    // Add book details
    void addBook() {
        cout << setw(50) << "Enter book title: ";
        cin >> ws;
        getline(cin, title);
        cout << setw(50) << "Enter author name: ";
        getline(cin, author);
        cout << setw(50) << "Enter ISBN number: ";
        getline(cin, isbn);
        cout << setw(50) << "Enter stock quantity: ";
        cin >> stock;
        borrowedCount = 0;
    }

    // Display book details
    void display() const {
        cout << "| " << setw(20) << title
             << "| " << setw(20) << author
             << "| " << setw(15) << isbn
             << "| " << setw(10) << stock
             << "| " << setw(10) << borrowedCount << " |\n";
    }

    // Borrow a book
    bool borrowBook() {
        if (stock > 0) {
            stock--;
            borrowedCount++;
            return true;
        }
        return false;
    }

    // Return a book
    bool returnBook() {
        stock++;
        return true;
    }

    // Update stock
    void updateStock(int newStock) { stock = newStock; }

    // Getters
    string getTitle() const { return title; }
    string getAuthor() const { return author; }
    string getIsbn() const { return isbn; }
    int getStock() const { return stock; }
    int getBorrowedCount() const { return borrowedCount; }
};

// Function Prototypes
void librarianMenu(vector<Book> &books);
void teacherStudentMenu(vector<Book> &books, const string &userType, const string &fileName);
bool loginLibrarian();
bool registerUser(const string &fileName);
bool loginUser(const string &fileName);
void loadBooks(vector<Book> &books);
void saveBooks(const vector<Book> &books);
void searchBook(const vector<Book> &books);

// Main Function
int main() {
    vector<Book> books;
    loadBooks(books);

    int choice;
    do {
        cout << "\n" << setw(40) << "Library Management System\n"
             << setw(40) << "===========================\n"
             << setw(30) << "1. Librarian\n"
             << setw(30) << "2. Teacher\n"
             << setw(30) << "3. Student\n"
             << setw(30) << "9. Exit\n"
             << setw(40) << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                if (loginLibrarian()) librarianMenu(books);
                break;
            case 2:
                teacherStudentMenu(books, "Teacher", "teacher.csv");
                break;
            case 3:
                teacherStudentMenu(books, "Student", "student.csv");
                break;
            case 9:
                saveBooks(books);
                cout << setw(40) << "Exiting... Thank you!\n";
                break;
            default:
                cout << setw(40) << "Invalid choice. Try again.\n";
        }
    } while (choice != 9);

    return 0;
}

// Librarian Menu
void librarianMenu(vector<Book> &books) {
    int choice;
    do {
        cout << "\n" << setw(40) << "Librarian Menu\n"
             << setw(40) << "==============\n"
             << setw(30) << "1. Add Book\n"
             << setw(30) << "2. Display Books\n"
             << setw(30) << "3. Search Book\n"
             << setw(30) << "4. Update Stock\n"
             << setw(30) << "9. Back to Main Menu\n"
             << setw(40) << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                Book newBook;
                newBook.addBook();
                books.push_back(newBook);
                break;
            }
            case 2: {
                cout << "\n| " << setw(20) << "Title"
                     << "| " << setw(20) << "Author"
                     << "| " << setw(15) << "ISBN"
                     << "| " << setw(10) << "Stock"
                     << "| " << setw(10) << "Borrowed |\n";
                cout << string(80, '-') << endl;
                for (const Book &book : books) {
                    book.display();
                }
                break;
            }
            case 3:
                searchBook(books);
                break;
            case 4: {
                string isbn;
                cout << setw(50) << "Enter ISBN to update stock: ";
                cin >> ws;
                getline(cin, isbn);

                for (Book &book : books) {
                    if (book.getIsbn() == isbn) {
                        int newStock;
                        cout << setw(50) << "Enter new stock quantity: ";
                        cin >> newStock;
                        book.updateStock(newStock);
                        cout << setw(50) << "Stock updated successfully.\n";
                        break;
                    }
                }
                break;
            }
            case 9:
                break;
            default:
                cout << setw(40) << "Invalid choice. Try again.\n";
        }
    } while (choice != 9);
}

// Teacher/Student Menu
void teacherStudentMenu(vector<Book> &books, const string &userType, const string &fileName) {
    int choice;
    do {
        cout << "\n" << setw(40) << userType + " Menu\n"
             << setw(40) << "=============\n"
             << setw(30) << "1. Register\n"
             << setw(30) << "2. Login\n"
             << setw(30) << "3. Borrow Book\n"
             << setw(30) << "4. Return Book\n"
             << setw(30) << "9. Back to Main Menu\n"
             << setw(40) << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                registerUser(fileName);
                break;
            case 2:
                if (!loginUser(fileName)) {
                    cout << setw(40) << "Login failed. Try again.\n";
                }
                break;
            case 3:
            case 4: {
                string isbn;
                cout << setw(50) << "Enter ISBN: ";
                cin >> ws;
                getline(cin, isbn);

                for (Book &book : books) {
                    if (book.getIsbn() == isbn) {
                        if (choice == 3 && book.borrowBook()) {
                            cout << setw(50) << "Book borrowed successfully.\n";
                        } else if (choice == 4 && book.returnBook()) {
                            cout << setw(50) << "Book returned successfully.\n";
                        } else {
                            cout << setw(50) << "Action failed. Check stock or validity.\n";
                        }
                        break;
                    }
                }
                break;
            }
            case 9:
                break;
            default:
                cout << setw(40) << "Invalid choice. Try again.\n";
        }
    } while (choice != 9);
}

// Load Books
void loadBooks(vector<Book> &books) {
    ifstream file("books.csv");
    string line;
    while (getline(file, line)) {
        stringstream ss(line);
        string title, author, isbn;
        int stock, borrowedCount;
        getline(ss, title, ',');
        getline(ss, author, ',');
        getline(ss, isbn, ',');
        ss >> stock >> borrowedCount;
        books.emplace_back(title, author, isbn, stock, borrowedCount);
    }
}

// Save Books
void saveBooks(const vector<Book> &books) {
    ofstream file("books.csv");
    for (const Book &book : books) {
        file << book.getTitle() << ","
             << book.getAuthor() << ","
             << book.getIsbn() << ","
             << book.getStock() << ","
             << book.getBorrowedCount() << "\n";
    }
}

// Search Book
void searchBook(const vector<Book> &books) {
    string title;
    cout << setw(50) << "Enter title to search: ";
    cin >> ws;
    getline(cin, title);

    for (const Book &book : books) {
        if (book.getTitle() == title) {
            book.display();
            return;
        }
    }
    cout << setw(50) << "Book not found.\n";
}

// Login Librarian
bool loginLibrarian() {
    string password;
    cout << setw(50) << "Enter librarian password: ";
    cin >> ws;
    getline(cin, password);
    return (password == "admin123");
}

// Register User
bool registerUser(const string &fileName) {
    string username, password;
    cout << setw(50) << "Enter username: ";
    cin >> ws;
    getline(cin, username);
    cout << setw(50) << "Enter password: ";
    getline(cin, password);

    ofstream file(fileName, ios::app);
    file << username << "," << password << "\n";
    cout << setw(50) << "Registration successful.\n";
    return true;
}

// Login User
bool loginUser(const string &fileName) {
    string username, password;
    cout << setw(50) << "Enter username: ";
    cin >> ws;
    getline(cin, username);
    cout << setw(50) << "Enter password: ";
    getline(cin, password);

    ifstream file(fileName);
    string line, fileUsername, filePassword;
    while (getline(file, line)) {
        stringstream ss(line);
        getline(ss, fileUsername, ',');
        getline(ss, filePassword, ',');
        if (fileUsername == username && filePassword == password) {
            cout << setw(50) << "Login successful.\n";
            return true;
        }
    }
    cout << setw(50) << "Login failed.\n";
    return false;
}
