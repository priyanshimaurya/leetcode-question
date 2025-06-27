#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int v){
        val=v;
        next=NULL;
        prev=NULL;
    }
};
class Doublell{
    public:
    Node* head;
    Node* tail;
    Doublell(){
        head=NULL;
        tail=NULL;
    }
    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    void insertail(int val){
        Node* newnode=new Node(val);
        if(head==NULL){
            head=newnode;
            tail=newnode;
        }
        else{
            tail->next=newnode;
            newnode->prev=tail;
            tail=newnode;
        }
    }
    void deleteDuplicates(){
    //    / Node* temp=head;
        if(head==NULL){
            return;
        }
        Node* curr=head;
        while(curr!=NULL && curr->next!=NULL){
            if (curr->val == curr->next->val) {
            Node* duplicate = curr->next;
            curr->next=curr->next->next;
            if(curr->next!=NULL){
                curr->next->prev=curr;
            }
            delete duplicate;
            }
            else{
                curr=curr->next;
            }
        }
    }
};
int main(){
    Doublell d;
    d.insertail(1);
    d.insertail(2);
    d.insertail(3);
    d.insertail(3);
    d.insertail(4);
    d.insertail(4);
    d.insertail(5);
    d.display();
    cout<<"remove duplicate:- "<<endl;
    d.deleteDuplicates();
    d.display();
}
