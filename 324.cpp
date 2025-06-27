
#include <bits/stdc++.h>
using namespace std;

void wiggleSort(vector<int>& nums) {
    vector<int> sorted(nums);
    sort(sorted.begin(), sorted.end());

    int n = nums.size();
    int mid = (n + 1) / 2; 
    int l = mid - 1;       
    int r = n - 1;         

    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            nums[i] = sorted[l--];
        } else {
            nums[i] = sorted[r--];
        }
    }
}

int main() {
    vector<int> nums = {1, 5, 1, 1, 6, 4};
    wiggleSort(nums);
    
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
}
