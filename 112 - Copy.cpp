#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node(int v) {
        val = v;
        left = NULL;
        right = NULL;
    }
};

void preorder(Node* root) {
    if (root == NULL) {
        return;
    }
    cout << root->val << " ";
    preorder(root->left);
    preorder(root->right);
}

int calculateSum(Node* root) {
    if (root == NULL) {
        return 0;
    }
    return root->val + calculateSum(root->left) + calculateSum(root->right);
}

bool checkSum(int targetsum, Node* root) {
    return calculateSum(root) == targetsum;
}

int main() {
    int targetsum = 5;
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    cout << "Preorder Traversal: ";
    preorder(root);
    cout << endl;

    if (checkSum(targetsum, root)) {
        cout << "Sum equals target sum: true" << endl;
    } else {
        cout << "Sum equals target sum: false" << endl;
    }

    
    

    return 0;
}
