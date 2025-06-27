#include<iostream>
using namespace std;

bool isSubsequence(string s, string t) {
    int sIndex = 0, tIndex = 0;
    
    while (sIndex < s.length() && tIndex < t.length()) {
        if (s[sIndex] == t[tIndex]) {
            sIndex++; 
        }
        tIndex++; 
    }
    
    return sIndex == s.length();
}

int main() {
    string s = "axc", t = "ahbgdc";
    if (isSubsequence(s, t)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}
