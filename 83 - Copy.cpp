#include<iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* prev;
    Node(int data) {
        val = data;
        next = NULL;
        prev = NULL;
    }
};

class doublell {
public:
    Node* head;
    Node* tail;

    doublell() {
        head = NULL;
        tail = NULL;
    }

    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->val << " <--> ";
            temp = temp->next;
        }
        cout << endl;
    }

    void insertend(int val) {
        Node* newnode = new Node(val);
        if (tail == NULL) {
            head = newnode;
            tail = newnode;
            return;
        }
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
    }
    void removeduplicate(Node* &head) {
        Node* temp = head;
        Node* nextval;
        while (temp != NULL && temp->next != NULL) {
            if (temp->val == temp->next->val) {
                nextval = temp->next->next;
                temp->next = nextval;
                
                
            } else {
                temp = temp->next;
            }
        }
    }
};

int main() {
    doublell dll;
    dll.insertend(1);
    dll.insertend(1);
    dll.insertend(2);

    dll.display(); 
    dll.removeduplicate(dll.head);
    dll.display();
    return 0;
}
