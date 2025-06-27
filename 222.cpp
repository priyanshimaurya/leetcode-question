#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int v){
        val=v;
        left=NULL;
        right=NULL;
       
    }
};
void preorder(Node* root){
    if(root==NULL){
        return ;
    }
    cout<<root->val<<" ";
    preorder(root->left);
    preorder(root->right);
}
int countNodes(Node* root){
   
    if(root==NULL){
        return 0;
    }
   return 1+countNodes(root->left)+countNodes(root->right);
}
int main(){
    Node* root=new Node(1);
    root->left= new Node(2);
    root->right= new Node(3);
    preorder(root);
    int totalcount=countNodes(root);
    cout<<"total count node in tree:- "<<totalcount<<" ";
}