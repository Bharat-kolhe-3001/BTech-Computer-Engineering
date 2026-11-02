#include <iostream>
using namespace std;

int main() {
    try {
        try {
            throw "Inner exception";
        } 
        catch (const char* e) {
            cout << "Caught inside inner catch: " << e << endl;
            throw;  // Re-throw the exception
        }
    } 
    catch (const char* e) {
        cout << "Caught inside outer catch: " << e << endl;
    }
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int numerator, denominator;
    cout << "Enter numerator: ";
    cin >> numerator;
    cout << "Enter denominator: ";
    cin >> denominator;

    try {
        if (denominator == 0) {  // Check for exception
            throw "Division by zero error!";  // Throw an error
        }
        cout << "Result: " << numerator / denominator << endl;  // Normal execution
    } 
    catch (const char* error) {  // Handle exception
        cout << "Error: " << error << endl;
    }

    return 0;
}
