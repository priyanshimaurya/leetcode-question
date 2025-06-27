#include <iostream>
using namespace std;

void intersection(int n1[], int s1, int n2[], int s2) {
    bool found = false;  

    for (int i = 0; i < s1; i++) {
        for (int j = 0; j < s2; j++) {
            if (n1[i] == n2[j]) {
                cout << n1[i] << " ";  
                found = true;          
            }
        }
    }

    if (!found) {
        cout << "No intersection found.";
    }
}

int main() {
    int n1[] = {1, 2, 2, 1};
    int n2[] = {2, 2};
    int s1 = sizeof(n1) / sizeof(n1[0]);
    int s2 = sizeof(n2) / sizeof(n2[0]);
    intersection(n1, s1, n2, s2);
    return 0;
}
