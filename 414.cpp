#include <iostream>
#include <vector>
#include <algorithm>  
using namespace std;

int thirdMax(vector<int>& nums) {
    sort(nums.begin(), nums.end(), greater<int>()); 
    int count = 1; 
    int first = nums[0];
    int second = -1;
    int third = -1;
    
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] != nums[i - 1]) {  
            count++;
            if (count == 2) {
                second = nums[i];
            } else if (count == 3) {
                third = nums[i];
                break;  // We found the third unique number
            }
        }
    }
    
    return (count < 3) ? first : third;
}
int main() {
    vector<int> nums = {5, 2, 2};
    cout << thirdMax(nums) << endl;  
}
