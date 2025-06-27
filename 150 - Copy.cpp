#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int evalRPN(vector<string> s) {
    stack<char>st;
    for(string c:s){
        if(c=="+"||c=="-"||c=="*"||c=="/"){
            int b=st.top();st.pop();
            int a=st.top();st.pop();
            int res;
            if(c=="+"){
                res=a+b;
            }
            else if(c=="-"){
                res=a-b;
            }
            else if(c=="*"){
                res=a*b;
            }
            else if(c=="/"){
                res=a/b;
            }
            st.push(res);
        }
        else{
            st.push(stoi(c));
        }
    }
    return st.top();
}
int main() {
    vector<string> tokens = {"2","1","+","3","*"};
    cout << evalRPN(tokens) << endl; 
    return 0;
}