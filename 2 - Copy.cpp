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
        while (temp != NULL) {
            cout << temp->val << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;  // Better to show the end of the list
    }

    void inserttail(int val) {
        Node* newnode = new Node(val);
        if (head == NULL) {
            head = newnode;
            tail = newnode;
        } else {
            tail->next = newnode;
            newnode->prev = tail;
            tail = newnode;
        }
    }

    void addTwoNumbers(doublell& other) {
        Node* t1 = head;
        Node* t2 = other.head;
        int carry = 0;
        doublell result; 

        while (t1 != NULL || t2 != NULL || carry) {
            int sum = carry;
            if (t1 != NULL) {
                sum += t1->val;
                t1 = t1->next;
            }
            if (t2 != NULL) {
                sum += t2->val;
                t2 = t2->next;
            }
            carry = sum / 10; 
            result.inserttail(sum % 10); 
        }

        cout << "Sum: ";
        result.display();
    }
};

int main() {
    doublell dll;
    dll.inserttail(2);
    dll.inserttail(4);
    dll.inserttail(3);

    dll.display();

    doublell dll2;
    dll2.inserttail(5);
    dll2.inserttail(6);
    dll2.inserttail(4);

    dll2.display();

    dll.addTwoNumbers(dll2);

    return 0;
}
