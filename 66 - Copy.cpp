#include <iostream>
using namespace std;

int plusOne(int arr[], int size) {
    if (size > 0) {
        arr[size - 1] =arr[size-1]+ 1; 
        cout << arr[size - 1] << endl; 
    } else {
        cout << "Array is empty." << endl;
    }
}

int main() {
    int arr[] = {1, 2, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    plusOne(arr, size); 
    return 0;
}
