#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(int arr[], int size) {
    if (size == 0) return 0; 

    int index = 1; 
    int count = 1; 

    for (int i = 1; i < size; i++) {
        if (arr[i] == arr[i - 1]) {
            count++;
        } else {
            count = 1;
        }
        if (count <= 2) {
            arr[index] = arr[i];
            index++;
        }
    }
  
   
    return index; 
}

int main() {
    int arr[] = {1, 1, 1, 2, 2, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int newSize = removeDuplicates(arr, size);
    
    cout << "New size: " << newSize << endl;
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < newSize; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
