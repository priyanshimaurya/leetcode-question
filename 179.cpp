#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(int a, int b) {
    return to_string(a) + to_string(b) > to_string(b) + to_string(a);
}

string largestNumber(vector<int>& nums) {    sort(nums.begin(), nums.end(), compare);
    
    if (nums[0] == 0) {
        return "0";
    }
    
    string result;
    for (int num : nums) {
        result += to_string(num);
    }
    
    return result;
}

int main() {
    vector<int> nums = {3,30,34,5,9};
    cout << largestNumber(nums) << endl; 
    return 0;
}
