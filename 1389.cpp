#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
   vector<int>target;
   for(int i=0;i<nums.size();i++){
    target.insert(target.begin()+index[i],nums[i]);
   }    
   return target;
}
int main() {
    vector<int> nums = {0,1,2,3,4};
    vector<int> index = {0,1,2,2,1};
    vector<int> target = createTargetArray(nums, index);
    for (int i = 0; i < target.size(); i++) {
        cout << target[i] << " ";
    }
    return 0;
}