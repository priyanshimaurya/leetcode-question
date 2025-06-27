#include<iostream>
#include<vector> 
using namespace std;
int findMaxConsecutiveOnes(vector<int>& nums) {
    int count=0;
    int currcount=0;
    for(int num:nums){
        if(num==1){
            currcount++;
        }
        else{
            count=max(count,currcount);
            currcount=0;
        }
    }
    count=max(count,currcount);
    return count;
}
int main(){
    vector<int> nums={1,1,0,1,1,1};
    cout<<findMaxConsecutiveOnes(nums);
}