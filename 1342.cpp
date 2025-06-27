#include<iostream>
using namespace std;

int numberOfSteps(int num) {
    int step = 0;
    while (num > 0) {
        if (num % 2 == 0) {
            num =num/ 2;  
        } else {
            num = num-1;  
        }
        step++;  
    }
    return step;  
}

int main() {
    int num = 8;
    int steps = numberOfSteps(num);
    cout << "Total steps to reduce " << num << " to zero: " << steps << endl;
    return 0;
}
