#include<bits/stdc++.h>
using namespace std;
int integerBreak(int n) {
    if(n==2){
        return 1;
    }        
    if(n==3){
        return 2;
    }
    int product = 1;
    while(n>4){
        product=product*3;
        n=n-3;
    }
    return product*n;
}
int main() {
    int n = 10; 
    int result = integerBreak(n);
    cout<<result;
    return 0;
}