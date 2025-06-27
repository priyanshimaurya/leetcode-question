#include<iostream>
#include<vector>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int v) {
        val = v;
        left = NULL;
        right = NULL;
    }
};
void preorder(TreeNode* root) {
    if (root == NULL) {
        return;
    }
    cout << root->val << " ";
    preorder(root->left);
    preorder(root->right);
}

TreeNode* buildBST(vector<int>& nums, int start, int end) {
    if (start > end) {
        return NULL;
    }
    int mid = start + (end - start) / 2;
    TreeNode* root = new TreeNode(nums[mid]);
    root->left = buildBST(nums, start, mid - 1);
    root->right = buildBST(nums, mid + 1, end);
    return root;
}

TreeNode* sortedArrayToBST(vector<int>& nums) {
    return buildBST(nums, 0, nums.size() - 1);
}

int main() {
    vector<int> nums = {-10, -3, 0, 5, 9};
    TreeNode* root = sortedArrayToBST(nums);
    cout << "Preorder Traversal of BST: ";
    preorder(root);
    cout << endl;
}
