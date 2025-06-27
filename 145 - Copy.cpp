#include<iostream>
#include<stack>
using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int va){
        val=va;
        left=NULL;
        right=NULL;
    }
};
void preorder(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->val<<" ";
    preorder(root->left);
    preorder(root->right);
}
int main(){
    Node* root=new Node(1);
    root->right= new Node(2);
    root->right->left= new Node(3);
    
    preorder(root);
}