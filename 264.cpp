#include <bits/stdc++.h>
using namespace std;

int nthUglyNumber(int n) {
    vector<int> ugly(n);
    ugly[0] = 1;
    int i2 = 0, i3 = 0, i5 = 0;
    for (int i = 1; i < n; ++i) {
        int next2 = ugly[i2] * 2;
        int next3 = ugly[i3] * 3;
        int next5 = ugly[i5] * 5;
        ugly[i] = min({next2, next3, next5});
        if (ugly[i] == next2) {
            ++i2;
        }
        if (ugly[i] == next3) {
            ++i3;
        }
        if (ugly[i] == next5) {
            ++i5;
        }
    }
    return ugly[n - 1];
}

int main() {
    int n = 10; 
    int result = nthUglyNumber(n);
    cout << "The " << n << "th ugly number is: " << result << endl;
    return 0;
}