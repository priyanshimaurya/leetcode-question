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
class doublell{
    public:
    Node* head;
    Node* tail;
    doublell(){
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
    void inserttail(int val){
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
    Node*  sorList(Node* head){
        if(head==NULL || head->next==NULL){
            return head;
        }
        Node* sorted=NULL;
        while(head!=NULL){
            Node* curr=head;
            head=head->next;
            if(sorted==NULL ||sorted->val>=curr->val){
                curr->next=sorted;
                sorted=curr;
            }
            else{
                Node* temp=sorted;
                while(temp->next!=NULL && temp->next->val<curr->val){
                    temp=temp->next;
                }
                curr->next=temp->next;
                temp->next=curr;

            }
        }
        return sorted;
    }
    Node* sortList(Node* head) {
        head = sorList(head);
    }
};
int main(){
    doublell d;
    d.inserttail(4);
    d.inserttail(2);
    d.inserttail(1);
    d.inserttail(3);
    
    d.display();
    cout<<endl;
    d.sortList(d.head);
    cout<<"after sorted :- ";
    d.display();
   
}
