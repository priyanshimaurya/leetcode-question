#include <iostream>
#include <vector>
using namespace std;

int sumRange(vector<int>& nums, int left, int right) {
    int sum = 0;
    for (int i = left; i <= right; i++) {
        sum += nums[i];
    }
    return sum;
}

int main() {
    vector<int> nums = {-2, 0, 3, -5, 2, -1};
    int left = 0, right = 2;
    
    cout << "Sum from " << left << " to " << right << " is: " << sumRange(nums, left, right) << endl; // Output: 1

    return 0;
}
