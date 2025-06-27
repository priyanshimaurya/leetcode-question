#include <iostream>
#include <vector>
using namespace std;

vector<int> replaceElements(vector<int>& arr) {
    int n = arr.size();
    int great = -1;

    for (int i = n - 1; i >= 0; i--) {
        int curr = arr[i]; 
        arr[i] = great;   
        if (curr > great) {
            great = curr;  
        }
    }
    return arr; 
}

int main() {
    vector<int> arr = {17, 18, 5, 4, 6, 1};
    vector<int> result = replaceElements(arr);

    // Print the modified array
    for (int num : result) {
        cout << num << " ";
    }
    return 0;
}
