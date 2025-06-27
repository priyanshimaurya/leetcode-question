#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int longestConsecutive(vector<int>& nums) {
    if (nums.empty()) {
        cout << "Empty" << endl;
        return 0; 
    }

    sort(nums.begin(), nums.end());

    int longestStreak = 1; 
    int count = 1;

    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] == nums[i - 1]){ 
            continue;
        }      
        if (nums[i] == nums[i - 1] + 1) {
            count++;
        } else {
            longestStreak = max(longestStreak, count);
            count = 1; 
        }
    }

    longestStreak = max(longestStreak, count);

    return longestStreak;
}

int main() {
    vector<int> nums = {0, 3, 7, 2, 5, 8, 4, 6, 0, 1};
    int result = longestConsecutive(nums);
    cout << "Longest consecutive sequence length: " << result << endl;
    return 0;
}
