#include<iostream>
#include<vector>
using namespace std;
int findNumbers(vector<int>& nums) {
    int count=0;
    for(int i=0;i<nums.size();i++){
        int num=nums[i];
        int digit=0;
    
    while(num!=0){
        num/=10;
        digit++;
    }
    if(digit%2==0){
        count++;
    }
    }
    return count;
}
int main(){
    vector<int> nums={12,345,2,6,7896};
    cout<<findNumbers(nums);
}