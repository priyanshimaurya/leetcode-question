#include <bits/stdc++.h>
using namespace std;

class MinStack {
private:
    stack<int> s1; 
    stack<int> s2;

public:
    void push(int x) {
        s1.push(x);
        if (s2.empty() || x <= s2.top()) {
            s2.push(x);
        }
    }

    void pop() {
        if (s1.empty()) {
            return;
        }
        int topValue = s1.top();
        s1.pop();
        if (topValue == s2.top()) {
            s2.pop();
        }
    }

    int top() {
        if (s1.empty()) {
            return -1; 
        }
        return s1.top();
    }

    int getMin() {
        if (s2.empty()) {
            return -1; 
        }
        return s2.top();
    }
};

int main() {
    MinStack minStack;

    minStack.push(5);
    minStack.push(3);
    minStack.push(7);
    minStack.push(2);

    cout << "Top element: " << minStack.top() << endl;
    cout << "Minimum element: " << minStack.getMin() << endl;

    minStack.pop();
    cout << "Top element after pop: " << minStack.top() << endl;
    cout << "Minimum element after pop: " << minStack.getMin() << endl; 

    minStack.pop();
    minStack.pop();
    cout << "Minimum element after two pops: " << minStack.getMin() << endl; 

    return 0;
}
