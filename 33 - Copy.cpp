#include<iostream>
#include<vector>
using namespace std;
int search(vector<int>& nums, int target) {
    bool found=false;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==target){
            found=true;
            return i;
        }
    }
    if(!found){
        return -1;
    }
};
int main(){
    vector<int>nums={1};
    int target=0;
    int res=search(nums,target);
    cout<<"found:- "<<res<<endl;
}
