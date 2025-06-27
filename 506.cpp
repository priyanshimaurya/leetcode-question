#include<bits/stdc++.h>
using namespace std;
int findRelativeRanks(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    for(int i=0; i<nums.size() ; i++){
        if(nums[i]==nums[0]){
            cout<<"Gold Medal ";
        }
        else if(nums[i]==nums[1]){
            cout<<"Silver Medal ";
        }
        else if(nums[i]==nums[2]){
            cout<<"Bronze Medal ";
        }
        else{
            cout<<nums[i]<<" ";
        }
    }

}
int main(){
    vector<int> nums={5,4,3,2,1};
    cout<<findRelativeRanks(nums);
}