#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node(int data) {
        val = data;
        prev = NULL;
        next = NULL;
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
            cout << temp->val << "<->";
            temp = temp->next;
        }
        cout << "NULL" << endl; 
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

    Node* getIntersectionNode(Doublell& other) {
        Node* l1 = head;
        Node* l2 = other.head;

        while (l1 != NULL) {
            l2 = other.head;
            while (l2 != NULL) {
                if (l1 == l2) { 
                    return l1;
                }
                l2 = l2->next;
            }
            l1 = l1->next;
        }
        return NULL; 
    }
};

int main() {
    Doublell dll;
    dll.inserttail(1);
    dll.inserttail(9);
    dll.inserttail(1);
    dll.inserttail(2);
    dll.inserttail(4);
    dll.display();

    Doublell dll2;
    dll2.inserttail(3);
    dll2.inserttail(2);
    dll2.inserttail(4);

    dll2.display();

    dll2.head->next = dll.head->next;

    cout << "Intersection: ";
    Node* intersectionNode = dll.getIntersectionNode(dll2);
    if (intersectionNode) {
        cout << intersectionNode->val << endl;
    } else {
        cout << "No intersection found." << endl;
    }

    return 0;
}
