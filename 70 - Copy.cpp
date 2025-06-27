#include <iostream>
using namespace std;
int climbStairs(int n){
    if (n <= 1) 
        return 1; 
    return climbStairs(n - 1) + climbStairs(n - 2);
}
int main() {
    int n;
    cout << "Enter the number of stairs: ";
    cin >> n;

    int ways = climbStairs(n);
    cout << "Number of ways to climb " << n << " stairs: " << ways << endl;

    return 0;
}
