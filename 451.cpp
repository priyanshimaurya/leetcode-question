#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string frequencySort(string s) {
    string rev = s;
    reverse(rev.begin(), rev.end());
    return rev;
}
int main(){
    string s="tree";
    cout<<frequencySort(s);
}