#include<iostream>
using namespace std;
int maximum69Number (int num) {
    string strnum=to_string(num);
    for(int i=0;i<strnum.length();i++){
        if(strnum[i]=='6'){
            strnum[i]='9';
            break;
        }
    }
    return stoi(strnum);
}
int main(){
    int num=9669;
    cout<<maximum69Number(num);
}