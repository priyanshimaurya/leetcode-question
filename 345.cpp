#include <iostream>
using namespace std;

string reverseVowels(string s) {
    string vowel = "aeiouAEIOU";
    int st = 0, end = s.size() - 1;
    while (st < end) {
        while (st < end && vowel.find(s[st]) == string::npos) {
            st++;
        }
        while (st < end && vowel.find(s[end]) == string::npos) {
            end--;
        }
        if (st < end) {
            swap(s[st], s[end]);
            st++;
            end--;
        }
    }
    return s;
}

int main() {
    string s = "IceCreAm";
    cout << reverseVowels(s) << endl;
}
