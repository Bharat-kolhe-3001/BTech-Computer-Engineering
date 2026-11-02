#include <iostream>
using namespace std;

class Div {
public:
    void division() {
        int a, b, c;
        cout << "Enter A value: ";
        cin >> a;
        cout << "Enter B value: ";
        cin >> b;

        try {
            if (b == 0) {
                throw "Division by zero is not allowed"; // Throwing a meaningful error message
            } else {
                c = a / b;
                cout << "Result: " << c << endl;
            }
        } catch (char* msg) {
            cout << "Caught Exception: " << msg << endl; // Display the error message
        }
    }
};

int main() {
    Div obj;
    obj.division(); // Calling the division method
    return 0;       // Indicating successful program execution
}
