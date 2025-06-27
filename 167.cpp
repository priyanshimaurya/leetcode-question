#include <iostream>
#include <vector>
using namespace std;

void twoSum(const vector<int>& numbers, int target) {
    int left = 0;
    int right = numbers.size() - 1;
    
    while (left < right) {
        int sum = numbers[left] + numbers[right];
        if (sum == target) {
            cout << "Indices: " << left + 1 << " " << right + 1 << endl;
            return;
        } else if (sum < target) {
            left++;
        } else {
            right--; 
        }
    }
    cout << "No two sum solution found." << endl; 
}

int main() {
    vector<int> number = {2, 7, 11, 15};
    int target = 9;

    twoSum(number, target);

    return 0;
}
