#include <iostream>
#include <vector>
using namespace std;
int rob(vector<int> &nums){
    int n = nums.size();
    int iflengthodd = 0;
    if (n == 1){
        return nums[0];
    }
    if (n == 2){
        return max(nums[0], nums[1]);
    }
    if(n == 3){
        return max(nums[0] + nums[2], nums[1]);
    }
    for (int i = 0; i < n; i++){
        if (i % 2 == 0){
            iflengthodd += nums[i];
        }
    }
    return iflengthodd;
}
int main(){
    vector<int> nums = {1,3,1};
    cout << rob(nums) << endl; 
    return 0;
}