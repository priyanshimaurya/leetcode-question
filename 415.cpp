#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void addString(string num1, string num2) {
    string result;
    int carry = 0;
    int i = num1.size() - 1, j = num2.size() - 1;

    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;

        if (i >= 0) {
            sum += num1[i] - '0'; 
            i--;
        }
        if (j >= 0) {
            sum += num2[j] - '0'; 
            j--;
        }

        carry = sum / 10;
        result += (sum % 10) + '0'; 
    }

    reverse(result.begin(), result.end()); 
    cout << result << endl;
}

int main() {
    string num1 = "11", num2 = "123";
    addString(num1, num2);
    return 0;
}
