#include <iostream>
#include <string>
using namespace std;

int lengthOfLongestSubstring(string s) {
    int maxLength = 0;

    for (int i = 0; i < s.length(); i++) {
        bool charFound[256] = {false};
        int currentLength = 0;

        for (int j = i; j < s.length(); j++) {
            if (charFound[s[j]]) {
                break; 
            }
            charFound[s[j]] = true; 
            currentLength++; 
        }

        maxLength = max(maxLength, currentLength);
    }

    return maxLength; 
}

int main() {
    string s = "abcabcbb";
    cout << "Length of longest substring without repeating characters: " << lengthOfLongestSubstring(s) << endl;
    return 0;
}
