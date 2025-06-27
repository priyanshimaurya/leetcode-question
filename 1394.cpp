#include <iostream>
#include <vector>
using namespace std;

int findLucky(vector<int>& arr) {
    int n = arr.size();
    int maxnum = -1; 

    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count == arr[i]) {
            maxnum = max(maxnum, arr[i]); 
        }
    }

    return maxnum;
}

int main() {
    vector<int> arr = {2,2,2,3,3};
    cout << findLucky(arr) << endl; 
    return 0;
}