#include <iostream>
using namespace std;

int minSubArrayLen(int arr[], int size, int target) {
    int left = 0, sum = 0, minLength = size + 1; 

    for (int i = 0; i < size; ++i) {
        sum += arr[i];

        while (sum >= target) {
            minLength = min(minLength, i - left + 1);
            sum -= arr[left++];
        }
    }

    return (minLength == size + 1) ? 0 : minLength;
}

int main() {
    int arr[] = {1, 4, 4}, size = sizeof(arr) / sizeof(arr[0]), target = 4;
    int result = minSubArrayLen(arr, size, target);
    cout << result << endl; 
    return 0;
}
