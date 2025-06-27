#include<iostream>
using namespace std;

bool repeatedSubstringPattern(string s) {
    int n = s.size();
    for (int len = 1; len <= n / 2; ++len) { 
        if (n % len == 0) { 
            string pa = s.substr(0, len); 
            string repeated = "";
            for (int i = 0; i < n / len; ++i) {
                repeated += pa;
            }
            if (repeated == s) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    string s = "aba";
    cout << (repeatedSubstringPattern(s) ? "true" : "false") << endl;
}
