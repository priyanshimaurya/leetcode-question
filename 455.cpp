#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int findContentChildren(vector<int> g, vector<int> s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int childindex=0;
        int cookieindex=0;
        while(childindex<g.size()&&cookieindex<s.size()){
            if(g[childindex]<=s[cookieindex]){
                childindex++;
            }
            cookieindex++;
        }
        cout<<childindex;
}
int main(){
    vector<int>g={1,2,3},s={1,1};
    findContentChildren(g,s);
    
}