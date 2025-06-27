#include <iostream>
using namespace std;
void pascal(int numRows) {
    for (int i = 0; i < numRows; i++) {
        int coef = 1; 
        for (int space = numRows - i; space > 0; space--) {
            cout << " ";
        }
        for (int j = 0; j <= i; j++) {
            cout << coef << " ";
            coef = coef * (i - j) / (j + 1); 
        }
            cout << "\n"; 
        }
    }
int main() {
    int numRows = 5; 
    pascal(numRows);
    return 0;
}
