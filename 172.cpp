#include<iostream>
using namespace std;
int trailingZeroes(int n) {
    int count=0;
    while(n>0){
        n/=5;
        count+=n;
    }
    return count;
}
int main(){
    int n=5;
    cout<<trailingZeroes(n)<<endl;
}