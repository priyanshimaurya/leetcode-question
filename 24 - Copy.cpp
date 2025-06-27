#include <iostream>
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

class DoubleLinkedList {
public:
    Node* tail;
    Node* head;

    DoubleLinkedList() {
        tail = NULL;
        head = NULL;
    }

    void display() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->val << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
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

    void swapPairs() {
        if (head == NULL || head->next == NULL) {
            return;
        }

        Node* prev = NULL;
        Node* current = head;
        head = current->next;  
        while (current && current->next) {
            Node* nextPair = current->next->next;
            Node* second = current->next;

            second->next = current;
            current->next = nextPair;
            if (nextPair) {
                nextPair->prev = current;
            }
            second->prev = prev;

            if (prev) {
                prev->next = second;  
            }

            prev = current;
            current = nextPair;  
        }
        if (prev) {
            prev->next = current; 
        }
    }
};

int main() {
    DoubleLinkedList d;
    d.add(1);
    d.add(2);
    d.add(3);
    d.add(4);
    d.add(5);
    d.swapPairs();
    d.display(); 
}
