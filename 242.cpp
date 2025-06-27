#include <iostream>
#include <algorithm> 
using namespace std;

bool isAnagram(string s, string t) {
    if (s.size() != t.size()) {
        return false;
    }

    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    return s == t;
}

int main() {
    string s = "anagram", t = "nagaram";
    if (isAnagram(s, t)) {
        cout << "true";
    } else {
        cout << "false";
    }
    return 0;
}
