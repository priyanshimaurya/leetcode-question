#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> result;
    sort(nums.begin(), nums.end());
    int n = nums.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(nums[i]+nums[j]+nums[k]==0){
                    vector<int> triplet = {nums[i], nums[j], nums[k]};
                    if(find(result.begin(), result.end(), triplet) == result.end()) {
                        result.push_back(triplet);
                    }
                }
            }
        }
    }    
    return result;   
}
int main() {
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> result = threeSum(nums);
    for(const auto& triplet : result) {
        cout << "[" << triplet[0] << ", " << triplet[1] << ", " << triplet[2] << "]" << endl;
    }
    return 0;
}