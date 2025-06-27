#include<iostream>
using namespace std;
int divide(int dividend,int divisor){
    int div=dividend/divisor;
    cout<<div<< " "<<endl;
}
int main(){
    int dividend=7,divisor=-3;
    divide(dividend,divisor);
}