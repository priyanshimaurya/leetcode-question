#include<bits/stdc++.h>
using namespace std;

    int maxSubArray(std::vector<int>& nums) {
        int maxSum = INT_MIN;
        int currentSum = 0;
        
        for (int num : nums) {
            currentSum += num;
            
            if (currentSum > maxSum) {
                maxSum = currentSum;
            }
            
            if (currentSum < 0) {
                currentSum = 0;
            }
        }
        
        return maxSum;
    }
int main(){
    vector<int> nums={-2,1,-3,4,-1,2,1,-5,4};
    cout<<maxSubArray(nums);
}