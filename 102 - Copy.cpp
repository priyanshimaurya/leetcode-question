#include <iostream>
#include <queue>
using namespace std;

struct Node {
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
void levelOrderTraversal(Node* root) {
    if (root == NULL) {
        return;
    }
    queue<Node*> q;
    q.push(root);
    while (!q.empty()) {
        Node* curr = q.front();
        q.pop();
        cout << curr->key << " ";
        if (curr->left != NULL) {
            q.push(curr->left);
        }
        if (curr->right != NULL) {
            q.push(curr->right);
        }
    }
}
int main() {
    Node* root = new Node(20);
    root->left = new Node(8);
    root->right = new Node(12);
    root->left->left = new Node(3);
    root->left->right = new Node(5);
    cout << "Preorder traversal: ";
    preorder(root);
    cout << endl;

    
    cout << endl;

    cout << "Level order traversal: ";
    levelOrderTraversal(root);
    cout << endl;

    return 0;
}
