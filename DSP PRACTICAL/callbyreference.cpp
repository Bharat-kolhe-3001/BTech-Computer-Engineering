#include <iostream>

using namespace std;

int sum_of_four(int a, int b, int c, int d) {
    int sum = 0;
    sum += a;
    sum += b;
    sum += c;
    sum += d;
    return sum;
}

int main() {
sum_of_four(10,20,30,40);
  
    return 0;
}