#include <iostream>
#include <algorithm>
using namespace std;

struct Node {
    int val;
    Node* left;
    Node* right;

    Node(int value){ 
        val=value;
        left=NULL;
        right=NULL;
    } 
};

void preorder(Node* root) {
    if (root == nullptr) {
        return;
    }
    cout << root->val << " ";
    preorder(root->left);
    preorder(root->right);
}
void removeLeafNodes(Node* &root, int target) {
    if (root == NULL) {
        return;  
    }

    removeLeafNodes(root->left, target);
    removeLeafNodes(root->right, target);

    if (root->left == nullptr && root->right == nullptr && root->val == target) {
        delete root;      
        root = nullptr;   
    }
}
int main() {
    Node* root = new Node(1);
    root->left = new Node(1); 
    root->right = new Node(1);
    // root->left->left = new Node(2);
    // root->right->left=new Node(2);
    // root->right->right= new Node(4);

    cout << "Preorder tree: ";
    preorder(root);
    cout << endl;

    int target=1;
    removeLeafNodes(root,target);

    cout << "Preorder tree: ";
    preorder(root);
    cout << endl;

    return 0;
}
