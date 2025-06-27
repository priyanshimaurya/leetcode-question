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
class doubleLL{
    public:
    Node* head;
    Node* tail;
    doubleLL(){
        head=NULL;
        tail=NULL;
    }
    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<"->";
            temp=temp->next;
        }
        cout<<endl;
    }
    void inserttail(int val) {
        Node* newnode = new Node(val);
        if (head == NULL) {
            head = newnode;
            tail = newnode;
            return;
        } else {
            tail->next = newnode;
            newnode->prev = tail;
            tail = newnode;
            return;
        }
    }
    void mergeTwoLists(doubleLL& otherList) {
    if (otherList.head == NULL) {
        return; 
    }

    if (head == NULL) {
        head = otherList.head;
        tail = otherList.tail;
        return;
    }

    Node* ptr1 = head;
    Node* ptr2 = otherList.head;

    while (ptr1 != NULL && ptr2 != NULL) {
        if (ptr1->val <= ptr2->val) {
            ptr1 = ptr1->next;
        } else {
            Node* temp = ptr2;
            ptr2 = ptr2->next;
            if (ptr1->prev != NULL) {
                ptr1->prev->next = temp; 
            }
            temp->prev = ptr1->prev; 
            temp->next = ptr1; 
            ptr1->prev = temp; 

            if (temp->prev == NULL) {
                head = temp;
            }
        }
    }

    if (ptr2 != NULL) {
        tail->next = ptr2;
        ptr2->prev = tail;
        tail = otherList.tail;
    }

    
}

};
int main(){
     doubleLL dll;
    dll.inserttail(1);
    dll.inserttail(9);
    dll.inserttail(1);
    dll.inserttail(2);
    dll.inserttail(4);
    dll.display();

    doubleLL dll2;
    dll2.inserttail(3);
    dll2.inserttail(2);
    dll2.inserttail(4);

    dll2.display();
    dll.mergeTwoLists(dll2);
    dll2.display();

}