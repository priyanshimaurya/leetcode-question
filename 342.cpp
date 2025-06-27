#include<iostream>
#include<math.h>
using namespace std;

bool isPowerOfFour(int n) {
    
    if (n > 0 && (log(n) / log(4)) == floor(log(n) / log(4))) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int n = 16;
    if (isPowerOfFour(n)) {
        cout << n << " is a power of four." << endl;
    } else {
        cout << n << " is not a power of four." << endl;
    }
    return 0;
}
