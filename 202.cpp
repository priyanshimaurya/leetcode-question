#include <iostream>
using namespace std;

int sumOfSquares(int num) {
    int sum = 0;
    while (num > 0) {
        int digit = num % 10;
        sum += digit * digit;
        num /= 10;
    }
    return sum;
}

bool isHappy(int n) {
    while (n != 1 && n != 4) { 
        n = sumOfSquares(n);
    }
    return n == 1;
}

int main() {
    int n = 2;
    if (isHappy(n)) {
        cout << "True";
    } else {
        cout << "False";
    }
    return 0;
}
