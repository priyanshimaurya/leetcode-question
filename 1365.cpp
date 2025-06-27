#include<iostream>
#include<vector>
using namespace std;
vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
    vector<int> result(nums.size(), 0);
    for(int i = 0; i < nums.size(); i++) {
        for(int j = 0; j < nums.size(); j++) {
            if(nums[i] > nums[j]) {
                result[i]++;
            }
        }
    }
    return result;
}
int main() {
    vector<int> nums = {8, 1, 2, 2, 3};
    vector<int> result = smallerNumbersThanCurrent(nums);

    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
