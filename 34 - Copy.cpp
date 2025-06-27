#include<iostream>
#include<vector>
using namespace std;
vector<int> searchRange(vector<int>& nums, int target) {
    for(int i=0;i<nums.size();i++){
        if(nums[i]==target){
            cout<<i<<' ';
        }
    }
} 
int main(){
    vector<int>nums={5,7,7,8,8,10};
    int target=8;
    searchRange(nums,target);
}