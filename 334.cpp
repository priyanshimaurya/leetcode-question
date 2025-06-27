#include<iostream>
#include<vector>
using namespace std;
bool increasingTriplet(vector<int> nums) {
    for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++){
            for(int k=j+1;k<nums.size();k++){
                if(nums[i]<nums[j]&&nums[j]<<nums[k]){
                    return true;
                }
            }
        }
    }
    return false;
}
int main(){
    vector<int>nums={5,4,3,2,1};
    if(increasingTriplet(nums)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}
