#include <iostream>
using namespace std;

void findTheDifference(string s, string t) {
    for (char c : t) {
        bool found = false; 
        for (char d : s) {
            if (c == d) {
 found = true; 
                break; 
            }
        }
        if (!found){
            cout << c << endl; 
            return; 
        }
    }
}

int main() {
    string s = "abcd", t = "abcde";
    findTheDifference(s, t);
    return 0;
}
