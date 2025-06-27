#include <iostream>
#include <vector>
using namespace std;

vector<int> nextGreaterElement(int nums1[], int nums2[], int s1, int s2) {
    vector<int> res(s1, -1);
    for (int i = 0; i < s1; i++) {
        for (int j = 0; j < s2; j++) {
            if (nums1[i] == nums2[j]) {
                for (int k = j + 1; k < s2; k++) {
                    if (nums2[k] > nums2[j]) {
                        res[i] = nums2[k]; 
                        break; 
                    }
                }
                break;
            }
        }
    }

    return res; 
}

int main() {
    int nums1[] = {4, 1, 2};
    int nums2[] = {1, 3, 4, 2};
    int s1 = sizeof(nums1) / sizeof(nums1[0]);
    int s2 = sizeof(nums2) / sizeof(nums2[0]);

    vector<int> result = nextGreaterElement(nums1, nums2, s1, s2);

    // Output the result
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
