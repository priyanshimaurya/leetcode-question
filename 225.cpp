#include <bits/stdc++.h>
using namespace std;

class Mystack {
    queue<int> q1, q2;

public:
    void push(int x) {
        q2.push(x);
        
        while (!q1.empty()) {
            q2.push(q1.front());
            q1.pop();
        }
        
        swap(q1, q2);
    }

    void pop() {
        if (!q1.empty()) {
            q1.pop();
        }
    }

    int top() {
        if (q1.empty()) {
            return -1;
        }
        return q1.front();
    }

    bool emptyis() {
        return q1.empty();
    }
};

int main() {
    Mystack s;
    s.push(1);
    s.push(2);
    
    cout << "Top element: " << s.top() << endl; 
    s.pop();
    
    cout << (s.emptyis() ? "Stack is empty" : "Stack is not empty") << endl; 
    s.pop(); 
    cout << (s.emptyis() ? "Stack is empty" : "Stack is not empty") << endl;
    
    return 0;
}
