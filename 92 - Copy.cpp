#include<iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* prev;
    
    Node(int v) {
        val = v;
        next = NULL;
        prev = NULL;
    }
};

class Doublell {
public:
    Node* head;
    Node* tail;
    
    Doublell() {
        head = NULL;
        tail = NULL;
    }
    
    void display() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->val << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl; 
    }

    void insertHead(int val) {
        Node* newnode = new Node(val);
        if (head == NULL) {
            head = newnode;
            tail = newnode; 
        } else {
            newnode->next = head;
            head->prev = newnode;  
            head = newnode;       
        }
    }
    void reverseBetween(Node* head, int left, int right) {
    if (!head || left == right) {
        return;
    }

    Node* temp = new Node(0);
    temp->next = head;
    Node* prev = temp;

    for (int i = 1; i < left; i++) {
        prev = prev->next;
    }

    Node* start = prev->next;
    Node* then = start->next;

    for (int i = 0; i < right - left; i++) {
        start->next = then->next;
        then->next = prev->next;
        prev->next = then;
        then = start->next;
    }

    head = temp->next;
}

    
};



int main() {
    Doublell dll;
    dll.insertHead(1);
    dll.insertHead(2);
    dll.insertHead(3);
    dll.insertHead(4);
    dll.insertHead(5);
    dll.reverseBetween(dll.head, 2, 4);
    
    cout << "List after reversal: ";
    dll.display();
    dll.display(); 
}
