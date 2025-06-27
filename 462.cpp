#include<bits/stdc++.h>
using namespace std;
int minMoves2(vector<int> & nums){
    int res=0;
    sort(nums.begin(),nums.end());
    int mid=nums[nums.size()/2];
    for(int i=0;i<nums.size();i++){
        res+=abs(nums[i]-mid);
    }
    return res;
}
int main(){
    vector<int> nums={1,2,3};
    cout<<minMoves2(nums);
}