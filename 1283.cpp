#include<bits/stdc++.h>
using namespace std;

int computeSum(vector<int>& nums, int divisor) {
    int sum = 0;
    for (int num : nums) {
        sum+=(num+divisor-1)/divisor;
    }
    return sum;
}

int smallestDivisor(vector<int>& nums, int threshold) {
    int left = 1, right = 0;
    int ans = right;  
    for(int num:nums){
        if(num>right){
            right=num;
        }
    }
    while(left<=right){
        int mid=left+(right-left)/2;
        int sum=computeSum(nums,mid);
    
        if(sum<=threshold){
            ans=mid;
            right=mid-1;
        }
        else{
            left=mid+1;
        }
    }
    return ans;
}

int main() {
    vector<int> nums = {91,41,78,86,8};
    int threshold = 114;
    cout << smallestDivisor(nums, threshold) << endl;
    return 0;
}
