#include <iostream>
using namespace std;

class ListNode {
public:
    int data;
    ListNode* next;
    ListNode* prev;
    ListNode(int data) {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

class DoublyLinkedList {
public:
    ListNode* head;
    ListNode* tail;
    
    DoublyLinkedList() {
        this->head = NULL;
        this->tail = NULL;
    }

    void insertAtEnd(int data) {
        ListNode* newNode = new ListNode(data);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
        }
        else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    void display() {
        ListNode* current = head;
        while (current != NULL) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
    void reorderList() {
        if (head==NULL || head->next==NULL) {
            return;
        }
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* prev = NULL, *curr = slow, *next;
        while (curr) {
            next = curr->next;
            curr->next = prev;
            if (prev) prev->prev = curr;
            prev = curr;
            curr = next;
        }
        ListNode* first = head;
        ListNode *second = prev;
        while (second && second->next) {
            ListNode* tmp1 = first->next;
            ListNode* tmp2 = second->next;
            first->next = second;
            second->next = tmp1;
            first = tmp1;
            second = tmp2;
        }
    }
};

int main() {
    DoublyLinkedList* dll = new DoublyLinkedList();
    dll->insertAtEnd(1);
    dll->insertAtEnd(2);
    dll->insertAtEnd(3);
    dll->insertAtEnd(4);
    dll->display();
    
    dll->reorderList();
    dll->display();

    return 0;
}
