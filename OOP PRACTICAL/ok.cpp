#include <iostream>
#include <iomanip>
#include <string>
#include <fstream> // For file operations
#include <sstream> // For parsing CSV data

using namespace std;

class Book {
    string title;
    string author;
    string isbn;
    int stock;

public:
    void addBook() {
        cout << "Enter book title: ";
        cin >> ws;
        getline(cin, title);
        cout << "Enter author name: ";
        getline(cin, author);
        cout << "Enter ISBN number: ";
        getline(cin, isbn);
        cout << "Enter stock quantity: ";
        cin >> stock;
    }

    void display() const {
        cout << "| " << setw(20) << left << title
             << "| " << setw(20) << left << author
             << "| " << setw(15) << left << isbn
             << "| " << setw(10) << left << stock << " |\n";
    }

    void updateStock(int newStock) {
        stock = newStock;
        cout << "Stock updated successfully.\n";
    }

    string getTitle() const { return title; }
    string getAuthor() const { return author; }
    string getIsbn() const { return isbn; }
    int getStock() const { return stock; }
};

// Function prototypes
void librarianMenu(Book books[], int &count);
void teacherStudentMenu(Book books[], int count, const string &userType, const string &fileName);
bool loginLibrarian();
bool registerUser(const string &fileName);
bool loginUser(const string &fileName);
void displayHeader();

int main() {
    Book books[50];
    int count = 0, choice;

    do {
        cout << "\n\t\t\t\t\t\t\t|----------------------------------------------------------|\n";
        cout << "\t\t\t\t\t\t\t|                 WELCOME TO SANJIVANI LIBRARY              |\n";
        cout << "\t\t\t\t\t\t\t|-----------------------------------------------------------|\n\n\n";
        cout << "\n\t\t\t\t\t\t\t|---------------------------------------------------------|\n";

        cout << "\n\t\t\t\t\t\t\t|Library Management System\n"
             << "\t\t\t\t\t\t\t|1. Librarian\n"
             << "\t\t\t\t\t\t\t|2. Teacher\n"
             << "\t\t\t\t\t\t\t|3. Student\n"
             << "\t\t\t\t\t\t\t|9. Exit\n";
        cout << "\t\t\t\t\t\t\t|-----------------------------------------------------------|\n\n\n";
        cout << "\t\t\t\t\t\t\tEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                cout << "\nLibrarian Login\n";
                if (loginLibrarian()) {
                    librarianMenu(books, count);
                } else {
                    cout << "Invalid credentials. Returning to main menu.\n";
                }
                break;
            }
            case 2: {
                cout << "Teacher Menu\n";
                teacherStudentMenu(books, count, "Teacher", "teacher.csv");
                break;
            }
            case 3: {
                cout << "Student Menu\n";
                teacherStudentMenu(books, count, "Student", "student.csv");
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

// Librarian login function
bool loginLibrarian() {
    string username, password;
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    if (username == "admin" && password == "123") {
        cout << "\n\t\t\t\t\t\t\t|-----------------------------|\n";
        cout << "\t\t\t\t\t\t\t|      LOGIN SUCCESSFUL       |\n";
        cout << "\t\t\t\t\t\t\t|-----------------------------|\n";
        return true;
    }
    return false;
}

// Registration function for Teachers/Students
bool registerUser(const string &fileName) {
    ofstream file(fileName, ios::app); // Append mode
    if (!file) {
        cerr << "Error opening file for registration.\n";
        return false;
    }

    string id, username, password;
    cout << "Enter ID: ";
    cin >> id;
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    // Save details in CSV
    file << id << "," << username << "," << password << "\n";
    file.close();

    cout << "\n\t\t\t\t\t\t\t|-----------------------------------|\n";
    cout << "\t\t\t\t\t\t\t|        Registration SUCCESSFUL     |\n";
    cout << "\t\t\t\t\t\t\t|------------------------------------|\n";
    return true;
}

// Login function for Teachers/Students
bool loginUser(const string &fileName) {
    ifstream file(fileName);
    if (!file) {
        cerr << "Error opening file for login.\n";
        return false;
    }

    string username, password;
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    string line, storedID, storedUsername, storedPassword;
    while (getline(file, line)) {
        stringstream ss(line);
        getline(ss, storedID, ',');
        getline(ss, storedUsername, ',');
        getline(ss, storedPassword, ',');

        if (storedUsername == username && storedPassword == password) {
            cout << "\n\t\t\t\t\t\t\t|-----------------------------|\n";
            cout << "\t\t\t\t\t\t\t|      LOGIN SUCCESSFUL       |\n";
            cout << "\t\t\t\t\t\t\t|-----------------------------|\n";
            file.close();
            return true;
        }
    }
    cout << "Invalid username or password.\n";
    file.close();
    return false;
}

// Display header for books table
void displayHeader() {
    cout << "+----------------------+----------------------+-------------------+----------+\n";
    cout << "| " << setw(20) << left << "Title"
         << "| " << setw(20) << left << "Author"
         << "| " << setw(15) << left << "ISBN"
         << "| " << setw(10) << left << "Stock" << " |\n";
    cout << "+----------------------+----------------------+-------------------+----------+\n";
}

// Librarian menu
void librarianMenu(Book books[], int &count) {
    int choice;
    do {
        cout << "\nLibrarian Menu\n"
             << "1. Add Book\n"
             << "2. Update Stock\n"
             << "3. Remove Book\n"
             << "4. Show All Books\n"
             << "9. Back to Main Menu\n"
             << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int numBooks;
                cout << "How many books do you want to add? ";
                cin >> numBooks;

                for (int i = 0; i < numBooks; i++) {
                    if (count < 50) {
                        cout << "\nAdding book " << i + 1 << ":\n";
                        books[count].addBook();
                        count++;
                    } else {
                        cout << "Inventory is full, cannot add more books.\n";
                        break;
                    }
                }
                break;
            }
            case 2: {
                string title;
                cout << "Enter book title to update stock: ";
                cin >> ws;
                getline(cin, title);

                for (int i = 0; i < count; i++) {
                    if (books[i].getTitle() == title) {
                        int newStock;
                        cout << "Enter new stock quantity: ";
                        cin >> newStock;
                        books[i].updateStock(newStock);
                        break;
                    }
                }
                break;
            }
            case 3: {
                string title;
                cout << "Enter book title to remove: ";
                cin >> ws;
                getline(cin, title);

                for (int i = 0; i < count; i++) {
                    if (books[i].getTitle() == title) {
                        for (int j = i; j < count - 1; j++) {
                            books[j] = books[j + 1];
                        }
                        count--;
                        cout << "Book removed successfully.\n";
                        break;
                    }
                }
                break;
            }
            case 4: {
                displayHeader();
                for (int i = 0; i < count; i++) {
                    books[i].display();
                }
                cout << "+----------------------+----------------------+-------------------+----------+\n";
                break;
            }
            case 9:
                cout << "Returning to main menu...\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 9);
}

// Teacher/Student menu with login/registration
void teacherStudentMenu(Book books[], int count, const string &userType, const string &fileName) {
    int choice;
    cout << userType << " Menu\n";
    cout << "1. Register\n"
         << "2. Login\n"
         << "9. Back to Main Menu\n";
    cout << "Enter choice: ";
    cin >> choice;

    switch (choice) {
        case 1: {
            registerUser(fileName);
            break;
        }
        case 2: {
            if (loginUser(fileName)) {
                displayHeader();
                for (int i = 0; i < count; i++) {
                    books[i].display();
                }
            } else {
                cout << "Login failed. Returning to main menu.\n";
            }
            break;
        }
        case 9:
            cout << "Returning to main menu...\n";
            break;
        default:
            cout << "Invalid choice. Try again.\n";
    }
}
