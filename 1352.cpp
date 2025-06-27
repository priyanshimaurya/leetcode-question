#include<iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node(int v) {
        val = v;
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

    void add(int val) {
        Node* newnode = new Node(val);
        if (head == NULL) {
            head = newnode;
            tail = newnode;
        } else {
            tail->next = newnode;
            tail = newnode;
        }
    }

    void display() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    int getProduct(int k) {
        if (k <= 0) {
            return 0;
        }
        
        Node* temp = head;
        int count = 0;
        int product = 1;
    
        while (temp != NULL) {
            count++;
            temp = temp->next;
        }
        
        if (k > count) {
            cout << "Insufficient elements in the list" << endl;
            return 0;
        }
        
        temp = head;
        int skip = count - k;
        
        for (int i = 0; i < skip; i++) {
            temp = temp->next;
        }
        
        product = 1;
        for (int i = skip; i < count; i++) {
            product *= temp->val;
            temp = temp->next;
        }

        return product;
    }
};

int main() {
    Doublell pr;
    
    pr.add(3);
    pr.add(0);
    pr.add(2);
    pr.add(5);
    pr.add(4);
    pr.display();

    cout << "Product of Last K numbers: " << pr.getProduct(2) << endl;
    cout << "Product of Last K numbers: " << pr.getProduct(3) << endl;
    cout << "Product of Last K numbers: " << pr.getProduct(4) << endl;
    pr.add(8);
    cout << "Product of Last K numbers: " << pr.getProduct(8) << endl;
    
    return 0;
}
