#include<bits/stdc++.h> 
using namespace std;
int reverseint(int x) {
   int rev=0,rem;
    while(x!=0){
        rem=x%10;
        rev=rev*10+rem;
        x/=10;
    }
    cout<<"After reverse : "<<rev<<endl;
}
int main(){
    int x=123;
    cout<<"before reverse: "<<x<<endl;
    reverseint(x);
}