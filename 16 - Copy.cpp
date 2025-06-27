#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int threeSumClosest(vector<int>& nums, int target) {
    int closestsum=INT_MAX/2;

    for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++){
            for(int k=j+1;k<nums.size();k++){
                int currsum=nums[i]+nums[j]+nums[k];
                if(abs(currsum-target)<abs(closestsum-target)){
                    closestsum=currsum; 
                }
            }
        }
    }
    return closestsum;
}
int main(){
    vector<int>nums={-1,2,1,-4};
    int target=1;
    cout<<threeSumClosest(nums,target);
}