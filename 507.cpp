#include <iostream>
using namespace std;
bool isPerfectNumber(int num) {
    if (num <= 1) {
        return false;
    } 

    int sum = 0;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    return sum == num;
}

int main() {
    int number;

    std::cout << "Enter a positive integer: ";
    std::cin >> number;

    if (isPerfectNumber(number)) {
        std::cout << number << " is a perfect number." << std::endl;
    } else {
        std::cout << number << " is not a perfect number." << std::endl;
    }

    return 0;
}
