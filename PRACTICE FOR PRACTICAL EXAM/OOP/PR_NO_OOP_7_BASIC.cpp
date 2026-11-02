#include <iostream>
using namespace std;

class Div {
public:
    void dev() {
        int a, b, c;
        cout << "Enter the A value: ";
        cin >> a;
        cout << "Enter the B value: ";
        cin >> b;

        try {
            if (b == 0) {
                throw "Division by zero is not allowed"; // Throwing a meaningful exception
            } else {
                c = a / b;
                cout << "Result: " << c << endl;
            }
        } catch (const char* msg) {
            cout << "Caught Exception: " << msg << endl; // Handling the exception
        }
    }
};

int main() {
    Div obj;
    obj.dev(); // Calling the division method
    return 0;   // Indicating successful execution
}
