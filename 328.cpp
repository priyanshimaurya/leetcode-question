#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* prev;
    Node(int v) {
        val = v;
        next = nullptr;
        prev = nullptr;
    }
};

class DoubleLL {
public:
    Node* tail;
    Node* head;
    
    DoubleLL() {
        tail = nullptr;
        head = nullptr;
    }
    
    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->val << " -> ";
            temp = temp->next;
        }
        cout << "nullptr" << endl;
    }
    
    void inserthead(int val) {
        Node* newnode = new Node(val);
        if (head == nullptr) {
            head = newnode;
            tail = newnode;
        } else {
            tail->next=newnode;
            newnode->prev= newnode;
            tail=newnode;
        }
    }
    
    void oddEvenList() {
        Node* temp = head;
        
        while (temp != nullptr) {
            if (temp->val % 2 != 0) {
                cout << temp->val << " ";
            }
            temp = temp->next;
        }
        

        temp = head;
        
        while (temp != nullptr) {
            if (temp->val % 2 == 0) {
                cout << temp->val << " ";
            }
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    DoubleLL d;
    d.inserthead(1);
    d.inserthead(2);
    d.inserthead(3);
    d.inserthead(4);
    d.inserthead(5);
    
    d.display();
    cout << "Odd and Even values:" << endl;
    d.oddEvenList();
    
    return 0;
}
