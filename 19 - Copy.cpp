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
class dobllell{
    public:
    Node* tail;
    Node* head;
    dobllell(){
        tail=NULL;
        head=NULL;
    }
    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<"->";
            temp=temp->next;
        }
        cout<<"NULL";
    }
    void add(int key) {
        Node* newnode = new Node(key);
        if (tail == NULL) {
            tail = newnode;
            head = newnode;
        } else {
            tail->next = newnode;
            newnode->prev = tail;
            tail = newnode;
        }
    }
    

Node* removeNthFromEnd( int n) {
    if (head == NULL || n <= 0) {
        return head; 
    }

    Node* fast = head;
    Node* slow = head;

    for (int i = 0; i < n; i++) {
        if (fast == NULL) {
            return head; 
        }
        fast = fast->next;
    }

    if (fast == NULL) {
        Node* toDelete = head; 
        head = head->next; 
        delete toDelete; 
        return head; 
    }

    while (fast->next != NULL) {
        fast = fast->next;
        slow = slow->next;
    }

    Node* toDelete = slow->next; 
    slow->next = toDelete->next; 
    delete toDelete; 

    return head;
}
};
int main(){
    dobllell d;
    d.add(71);
    d.add(82);
    d.add(53);
    d.add(84);
    d.add(05);
    d.removeNthFromEnd(2);
    d.display();
}