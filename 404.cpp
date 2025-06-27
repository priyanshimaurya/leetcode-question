#include <iostream>
using namespace std;

class Node {
    public:
    int key;
    Node* left;
    Node* right;
    Node(int k) : key(k), left(nullptr), right(nullptr) {}
};

void preorder(Node* node) {
    if (node == nullptr) return;
    cout << node->key << " ";
    preorder(node->left);
    preorder(node->right);
}
int sumOfLeftLeaves(Node* root) {
        int sum=0;
        if(root==NULL){
            return 0;
        }
        if(root->left!=NULL&& root->left->left==NULL&& root->left->right==NULL){
            sum+=root->left->key;
        }
        sum+=sumOfLeftLeaves(root->left);
        sum+=sumOfLeftLeaves(root->right);
        return sum;
    }
int main() {
    Node* root = new Node(3);
    root->left = new Node(9);
    root->right = new Node(20);
    root->right->left = new Node(15);
    root->right->right = new Node(7);
    cout << "Preorder traversal: ";
    preorder(root);
    cout << endl;
    cout<<"Sum of leaves Node:-"<<sumOfLeftLeaves(root);
    

    

    return 0;
}
