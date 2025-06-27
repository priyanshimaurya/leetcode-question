#include <iostream>
// #include<vector>
using namespace std;

bool containsNearbyDuplicate(int arr[] ,int size, int k) {
    
    for (int i = 0; i <size; i++) {
        for (int j = i + 1; j <size && (j - i) <= k; j++) {
            if (arr[i] == arr[j]) {
                return true; 
            }
        }
    }
    return false;
}

int main() {
    int arr[]={1, 2, 3, 1, 2, 3};
    int k = 2;
    int size=sizeof(arr)/sizeof(arr[0]);

    if (containsNearbyDuplicate(arr, size,k)) {
        cout << "True";
    } else {
        cout << "False";
    }
    return 0;
}
