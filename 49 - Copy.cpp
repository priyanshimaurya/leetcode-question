#include<bits/stdc++.h>
using namespace std;

void groupAnagrams(string strs[], int n) {
    vector<bool> visited(n, false);
    
    for (int i = 0; i < n; i++) {
        if (visited[i]) {
            continue;
        }

        string key = strs[i];
        sort(key.begin(), key.end());
        cout << "Anagrams of " << strs[i] << ": ";

        for (int j = i; j < n; j++) {
            if (!visited[j]) {
                string temp = strs[j];
                sort(temp.begin(), temp.end());
                if (key == temp) {
                    cout << strs[j] << " ";
                    visited[j] = true; 
                }
            }
        }
        cout << endl; 
    }
}

int main() {
    string strs[] = {"eat", "tea", "tan", "ate", "nat", "bat"};
    int n = sizeof(strs) / sizeof(strs[0]);
    groupAnagrams(strs, n);
    return 0;
}
