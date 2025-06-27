#include<iostream>
#include<vector>
using namespace std;
int singleNumber(vector<int>& nums) {
      for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++){
            if(nums[i]!=nums[j]){
                cout<<nums[i];
            }
        }
      }  
   
}
int main(){
    vector<int>nums={2,2,3,2};
    cout<<singleNumber(nums);
}