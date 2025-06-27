#include<iostream>
#include<vector>
using namespace std;
int countNegatives(vector<vector<int>>& nums) {
    int count=0;
    for(int i=0; i<nums.size(); i++){
         for (int j = 0; j < nums[i].size(); j++) {
        if(nums[i][j]<0){
            count++;
        }
        }
    }       
    return count;
}
int main(){
    vector<vector<int>>nums={{4,3,2,-1},{3,2,1,-1},{1,1,-1,-2},{-1,-1,-2,-3}};
    cout<<countNegatives(nums)<<endl;
}