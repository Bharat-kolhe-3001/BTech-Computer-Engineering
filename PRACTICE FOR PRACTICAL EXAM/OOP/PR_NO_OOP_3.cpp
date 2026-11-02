#include <iostream>
using namespace std;

class Complex {
    float a_real, a_imag;  // First complex number parts
    float b_real, b_imag;  // Second complex number parts

public:
    float temp_real;       // Temporary variables to hold results
    float temp_imag;

    // Constructor to initialize temporary results to 0
    Complex() {
        temp_real = 0;
        temp_imag = 0;
    }

    // Accept the first complex number
    void accept_first() {
        cout << "Enter the real part of the first complex number (a): ";
        cin >> a_real;
        cout << "Enter the imaginary part of the first complex number (a): ";
        cin >> a_imag;
    }

    // Accept the second complex number
    void accept_second() {
        cout << "Enter the real part of the second complex number (b): ";
        cin >> b_real;
        cout << "Enter the imaginary part of the second complex number (b): ";
        cin >> b_imag;
    }

    // Overloading the '+' operator
    Complex operator+(Complex& c) {
        Complex result;
        result.temp_real = a_real + c.b_real;
        result.temp_imag = a_imag + c.b_imag;
        cout << "Addition is: " << result.temp_real << " + " << result.temp_imag << "i\n";
        return result;
    }

    // Overloading the '-' operator
    Complex operator-(Complex& c) {
        Complex result;
        result.temp_real = a_real - c.b_real;
        result.temp_imag = a_imag - c.b_imag;
        cout << "Subtraction is: " << result.temp_real << " + " << result.temp_imag << "i\n";
        return result;
    }

    // Overloading the '*' operator
    Complex operator*(Complex& c) {
        Complex result;
        result.temp_real = (a_real * c.b_real) - (a_imag * c.b_imag);
        result.temp_imag = (a_real * c.b_imag) + (a_imag * c.b_real);
        cout << "Multiplication is: " << result.temp_real << " + " << result.temp_imag << "i\n";
        return result;
    }

    // Overloading the '/' operator
    Complex operator/(Complex& c) {
        Complex result;
        float deno = (c.b_real * c.b_real) + (c.b_imag * c.b_imag);
        if (deno == 0) {
            cout << "Division is not possible (denominator is zero).\n";
            return result;
        }
        result.temp_real = ((a_real * c.b_real) + (a_imag * c.b_imag)) / deno;
        result.temp_imag = ((a_imag * c.b_real) - (a_real * c.b_imag)) / deno;
        cout << "Division is: " << result.temp_real << " + " << result.temp_imag << "i\n";
        return result;
    }
};

int main() {
    Complex comp1, comp2, result;
    int ch;

    // Accept the two complex numbers
    comp1.accept_first();
    comp2.accept_second();

    // Menu for performing operations
    do {
        cout << "\nMenu\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\n";
        cout << "Enter your choice: ";
        cin >> ch;

        switch (ch) {
            case 1:
                result = comp1 + comp2;
                break;
            case 2:
                result = comp1 - comp2;
                break;
            case 3:
                result = comp1 * comp2;
                break;
            case 4:
                result = comp1 / comp2;
                break;
            case 5:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Wrong choice. Please try again.\n";
        }
    } while (ch != 5);

    return 0;
}
