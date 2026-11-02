#include <iostream>
using namespace std;

class Book {
public:
    int a[20];
    int b[20];
    int sum[20];
    int n;

    void test() {
        cout << "Enter size of array: ";
        cin >> n;
        cout << "Enter elements of the 1st array: ";
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << "Enter elements of the 2nd array: ";
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        cout << "Sum of both arrays: ";
        for (int i = 0; i < n; i++) {
            sum[i] = a[i] + b[i];
            cout << sum[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Book b1;
    b1.test();
    return 0;
}
