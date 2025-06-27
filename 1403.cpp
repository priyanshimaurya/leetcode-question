#include<bits/stdc++.h>
using namespace std;
vector<int> minSubsequence(vector<int>& nums) {
    int n = nums.size();
    int sum = 0;
    int total = accumulate(nums.begin() , nums.end() , 0);
        sort(nums.begin() , nums.end() , greater<int>());
        vector<int> res;
        for(int i = 0; i < n; ++i){
            res.push_back(nums[i]);
            sum += nums[i];
            if(2 * sum > total) {
                break;
            }
        }
        return res;
}
int main(){
    vector<int> nums = {4, 3, 10, 9, 8};
    vector<int> ans = minSubsequence(nums);
    for(int num : ans){
        cout << num << " ";
    }
}