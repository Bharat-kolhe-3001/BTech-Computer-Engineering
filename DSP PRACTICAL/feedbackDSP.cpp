#include <iostream>
#include <string>
using namespace std;

class TRANING {
public:
    int rollno, Year;
    string name;

    void accept() {
        cout << "Enter Roll No: ";
        cin >> rollno;
        cout << "Enter Class Year: ";
        cin >> Year;
        cout << "Enter Student Name: ";
        cin >> name;
    }

    void display() {
        cout << "Roll No: " << rollno << endl;
        cout << "Name: " << name << endl;
        cout << "Class Year: " << Year << endl;
    }
};

int main() {
    int N, ch, presentroll, flag = 0, i;
    string presentname;
    TRANING obj[10];

    cout << "Enter How Many Students: ";
    cin >> N;

    do {
        cout << "\nMenu\n1. Accept\n2. Display\n3. Use Linear Search\n4. Use Binary Search\n5. Exit\n";
        cin >> ch;

        switch (ch) {
        case 1:
            for (i = 0; i < N; i++) {
                obj[i].accept();
            }
            break;

        case 2:
            for (i = 0; i < N; i++) {
                obj[i].display();
            }
            break;

        case 3:
            flag = 0;
            cout << "Enter Roll No you want to search: ";
            cin >> presentroll;
            cout << "Enter Name you want to search: ";
            cin >> presentname;
            for (i = 0; i < N; i++) {
                if (obj[i].rollno == presentroll && obj[i].name == presentname) {
                    cout << "Student is present." << endl;
                    flag = 1;
                    obj[i].display();
                    break;
                }
            }
            if (flag == 0) {
                cout << "Student is NOT present." << endl;
            }
            break;

        case 4:
            // Sorting by roll number using bubble sort
            for (i = 0; i < N-1; i++) {
                for (int j = i+1; j < N; j++) {
                    if (obj[i].rollno > obj[j].rollno) {
                        // Swap
                        TRANING temp = obj[i];
                        obj[i] = obj[j];
                        obj[j] = temp;
                    }
                }
            }

            cout << "\nSorted by Roll Number:\n";
            for (i = 0; i < N; i++) {
                obj[i].display();
            }

            int low = 0, high = N - 1, mid, key;
            cout << "\nEnter the Roll No you want to search: ";
            cin >> key;

            flag = 0; 
            while (low <= high) {
                mid = (low + high) / 2;
                if (obj[mid].rollno == key) {
                    cout << "Student found at position: " << mid + 1 << endl;
                    obj[mid].display();
                    flag = 1;
                    break;
                } else if (obj[mid].rollno < key) {
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            }

            if (flag == 0) {
                cout << "Student with Roll No " << key << " not found." << endl;
            }
            break;

        case 5:
            cout << "Exiting... THANK YOU!" << endl;
            break;

        default:
            cout << "Invalid choice! Please try again." << endl;
        }

    } while (ch != 5);

    return 0;
}
