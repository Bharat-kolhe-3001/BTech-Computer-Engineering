#include <iostream>
#include <string>

using namespace std;

class TRAINING {
public:
    int rollno, rate, Experience, teachearfeedback;
    string name;
    string Year;
    float average;

    void accept(int studentNumber) {
        cout << "Enter details for student " << studentNumber << ":\n";
        cout << "Enter Roll No: ";
        cin >> rollno;
        cout << "Enter Class (Year): ";
        cin >> Year;
        cout << "Enter Name: ";
        cin >> name;
    }

    void display() {
        cout << "Roll No: " << rollno << ", Name: " << name << ", Year: " << Year << endl;
    }

    void feedback(int studentNumber) {
        cout << "Enter feedback for student " << studentNumber << ":\n";
        cout << "Rate the program (1-very poor, 5-excellent): ";
        cin >> rate;
        cout << "Rate your experience (1-very poor, 5-excellent): ";
        cin >> Experience;
        cout << "Rate the teacher's feedback (1-very poor, 5-excellent): ";
        cin >> teachearfeedback;
    }

    int Average() {
        average = (rate + Experience + teachearfeedback) / 3.0;
        return average;
    }
};

int main() {
    int N, ch, presentroll, flag = 0, i, student = 1;
    string presentname;

    cout << "Enter the number of students: ";
    cin >> N;

    TRAINING obj[N];

    do {
        cout << "\nMenu\n1. Accept\n2. Display\n3. Use Linear Search\n4. Use Binary Search\n5. Provide Feedback\n6. Display Feedback\n7. Exit\n";
        cin >> ch;

        switch (ch) {
            case 1:
                for (int i = 0; i < N; i++) {
                    obj[i].accept(i + 1);
                }
                break;

            case 2:
                if (N == 0) {
                    cout << "No data available. Please enter student data first." << endl;
                } else {
                    cout << "Displaying student details:\n";
                    for (int i = 0; i < N; i++) {
                        obj[i].display();
                    }
                }
                break;

            case 3:
                flag = 0;
                cout << "Enter Roll No to search: ";
                cin >> presentroll;
                cout << "Enter Name to search: ";
                cin >> presentname;
                for (int i = 0; i < N; i++) {
                    if (obj[i].rollno == presentroll && obj[i].name == presentname) {
                        cout << "Student found!" << endl;
                        flag = 1;
                        break;
                    }
                }
                if (flag == 0) {
                    cout << "Student not found" << endl;
                }
                break;

            case 4: {
                for (int i = 0; i < N - 1; i++) {
                    for (int j = 0; j < N - 1 - i; j++) {
                        if (obj[j].rollno > obj[j + 1].rollno) {
                            TRAINING temp = obj[j];
                            obj[j] = obj[j + 1];
                            obj[j + 1] = temp;
                        }
                    }
                }

                cout << "Sorted list:\n";
                for (int i = 0; i < N; i++) {
                    obj[i].display();
                }

                int high = N - 1, low = 0, mid;
                cout << "Enter the roll number to search: ";
                cin >> presentroll;
                cout << "Enter the Name to search: ";
                cin >> presentname;

                flag = 0;
                while (low <= high) {
                    mid = (low + high) / 2;
                    if (obj[mid].rollno == presentroll && obj[mid].name == presentname) {
                        cout << "Student found at position " << mid + 1 << endl;
                        flag = 1;
                        break;
                    } else if (obj[mid].rollno < presentroll) {
                        low = mid + 1;
                    } else {
                        high = mid - 1;
                    }
                }
                if (flag == 0) {
                    cout << "Student not found" << endl;
                }
                break;
            }

            case 5:
                for (i = 0; i < N; i++) {
                    obj[i].feedback(i + 1);
                }
                break;

            case 6:
                for (i = 0; i < N; i++) {
                    float Total = obj[i].Average();

                    cout << "[" << student << "] Student's feedback:\n";
                    student++;

                    if (Total <= 2) {
                        cout << "This student's feedback is poor." << endl;
                    } else if (Total <= 4) {
                        cout << "This student's feedback is satisfactory." << endl;
                    } else {
                        cout << "This student's feedback is excellent." << endl;
                    }
                    cout << endl;
                }
                break;

            case 7:
                cout << "Exiting... THANK YOU" << endl;
                break;

            default:
                cout << "Invalid choice, please try again." << endl;
        }

    } while (ch != 7);

    return 0;
}
