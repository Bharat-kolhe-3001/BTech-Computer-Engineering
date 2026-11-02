#include <iostream>
#include <cstring>
using namespace std;

bool isPalindrome(char str[], int length) {
    int left = 0;
    int right = length - 1;

    while (left < right) {
       
        while (left < right && (str[left] == ' ' || ispunct(str[left]))) {
            left++;
        }
       
        while (left < right && (str[right] == ' ' || ispunct(str[right]))) {
            right--;
        }
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true; 
}

int main() {
    char input[40];
    cout << "Enter the statement: ";
    cin.getline(input, 40);

    for (int i = 0; i < strlen(input); i++) {
        input[i] = tolower(input[i]);
    }

    int length = strlen(input);
    if (isPalindrome(input, length)) {
        cout << "\nPalindrome" << endl;
    } else {
        cout << "\nNot a Palindrome" << endl;
    }

    return 0;
}
