#include <iostream>
#include <vector>
using namespace std;

bool checkIfExist(vector<int>& arr) {
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr.size(); j++) {
            if (i != j && arr[i] == 2 * arr[j]) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    vector<int> arr = {-16, -13, 8};
    cout << (checkIfExist(arr) ? "true" : "false");
    return 0;
}
