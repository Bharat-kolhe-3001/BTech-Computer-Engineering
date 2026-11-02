#include <stdio.h>

int sum(int a, int b);

int main() {
    int a, b, s;
    printf("Enter a value: ");
    scanf("%d", &a);
    printf("Enter b value: ");
    scanf("%d", &b);
    s = sum(a, b);
    printf("The sum is: %d\n", s);  // Corrected this line
    return 0;
}

int sum(int a, int b) {
    return a + b;
}
/*You need to write a C++ program for a college library that handles the costs of n books in the following ways:

Store the cost of books in an array in ascending order: This means you will need to collect the costs of the books from the user and then sort them in ascending order.

Arrange books in descending order of their cost: After sorting the costs in ascending order, you will need to reverse the order to get them in descending order.

Implement the following functions:

a. Copy the cost of books with cost less than 500 to a new array: This function will iterate through the array of book costs and create a new array containing only those costs which are less than 500.

b. Delete duplicate entries using a temporary array: This function will remove duplicate costs from the array by using an additional temporary array.

c. Delete duplicate entries without using a temporary array: This function will remove duplicate costs from the array without using any additional arrays.

d. Count the number of books with cost more than 500: This function will count and return the number of books whose cost is greater than 500.

Now, let's provide a revised and detailed explanation along with the program.

Explanation with Detailed Steps
Store the cost of books in an array in ascending order:

Input the number of books (n).
Input the cost of each book and store these costs in an array.
Sort the array in ascending order.
Arrange books in descending order of their cost:

Reverse the sorted array to arrange the costs in descending order.
Implement functions:

Copy the cost of books with cost less than 500 to a new array:
Iterate through the array and check if the cost is less than 500.
If it is, add it to a new array.
Delete duplicate entries using a temporary array:
Sort the array and use the unique function to remove duplicates.
Copy the result to a temporary array.
Delete duplicate entries without using a temporary array:
Sort the array and use the unique function to remove duplicates directly in the original array.
Count the number of books with cost more than 500:
Iterate through the array and count the number of costs that are greater than 500.*/
/*#include <iostream>

using namespace std;

// Function to copy costs of books with cost less than 500 to a new array
int copyCostsLessThan500(int costs[], int n, int newCosts[]) {
    int newCount = 0;
    for (int i = 0; i < n; ++i) {
        if (costs[i] < 500) {
            newCosts[newCount++] = costs[i];
        }
    }
    return newCount;
}

// Function to delete duplicate entries using a temporary array
int deleteDuplicatesWithTempArray(int costs[], int n) {
    int temp[n];
    int j = 0;

    for (int i = 0; i < n; ++i) {
        bool found = false;
        for (int k = 0; k < j; ++k) {
            if (costs[i] == temp[k]) {
                found = true;
                break;
            }
        }
        if (!found) {
            temp[j++] = costs[i];
        }
    }

    for (int i = 0; i < j; ++i) {
        costs[i] = temp[i];
    }
    return j;
}

// Function to delete duplicate entries without using a temporary array
int deleteDuplicatesWithoutTempArray(int costs[], int n) {
    int j = 0;

    for (int i = 0; i < n; ++i) {
        bool found = false;
        for (int k = 0; k < j; ++k) {
            if (costs[i] == costs[k]) {
                found = true;
                break;
            }
        }
        if (!found) {
            costs[j++] = costs[i];
        }
    }

    return j;
}

// Function to count number of books with cost more than 500
int countCostsMoreThan500(int costs[], int n) {
    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (costs[i] > 500) {
            ++count;
        }
    }
    return count;
}

// Function to sort the array in ascending order
void sortAscending(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

// Function to reverse the array
void reverseArray(int arr[], int n) {
    for (int i = 0; i < n / 2; ++i) {
        int temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }
}

int main() {
    int n;
    cout << "Enter the number of books: ";
    cin >> n;

    int costs[n];
    cout << "Enter the costs of the books: ";
    for (int i = 0; i < n; ++i) {
        cin >> costs[i];
    }

    // Sort the array in ascending order
    sortAscending(costs, n);

    // Reverse the array to get costs in descending order
    reverseArray(costs, n);

    // Copy costs of books with cost less than 500
    int costsLessThan500[n];
    int countLessThan500 = copyCostsLessThan500(costs, n, costsLessThan500);

    // Delete duplicate entries using a temporary array
    int uniqueCountWithTempArray = deleteDuplicatesWithTempArray(costs, n);

    // Delete duplicate entries without using a temporary array
    int uniqueCountWithoutTempArray = deleteDuplicatesWithoutTempArray(costs, n);

    // Count number of books with cost more than 500
    int countMoreThan500 = countCostsMoreThan500(costs, n);

    // Display results
    cout << "Costs in descending order: ";
    for (int i = 0; i < n; ++i) {
        cout << costs[i] << " ";
    }
    cout << endl;

    cout << "Costs less than 500: ";
    for (int i = 0; i < countLessThan500; ++i) {
        cout << costsLessThan500[i] << " ";
    }
    cout << endl;

    cout << "Unique costs (using temporary array): ";
    for (int i = 0; i < uniqueCountWithTempArray; ++i) {
        cout << costs[i] << " ";
    }
    cout << endl;

    // Restore original array to display unique costs without temporary array
    cout << "Unique costs (without using temporary array): ";
    for (int i = 0; i < uniqueCountWithoutTempArray; ++i) {
        cout << costs[i] << " ";
    }
    cout << endl;

    cout << "Number of books with cost more than 500: " << countMoreThan500 << endl;

    return 0;
}
*/