#include<iostream>
#include<vector>
using namespace std;
int findPeakElement(vector<int>& nums) {
   
    int n=nums.size();
    if(n==1){
        return 0;
    }
    if(nums[0]>nums[1]){
        return 0;
    }
    if(nums[n-1]>nums[n-2]){
        return n-1;
    }
    for(int i=0;i<nums.size();i++){
        if(nums[i]>nums[i-1]&& nums[i]>nums[i+1]){
            return i; 
        }
    }  
    return -1;
}
int main(){
    vector<int>nums={1,2,3,1};
    int res=findPeakElement(nums);
    if(res!=-1){
        cout<<"peak element is "<<nums[res]<<"present at index "<<res<<endl;
    }
    else{
        cout<<"not found peak element"<<endl;
    }
}