#include<iostream>
using namespace std;
bool canConstruct(string ransomNote,string magazine){
    bool found=false;
    for(char c:ransomNote){
        for(char c1:magazine){
            if(ransomNote[c]==magazine[c1]){
                found=true;
                cout<<"TRUE";
            }
        }
    }
    if(!found){
        cout<<"FALSE";
    }
}
int main(){

    string ransomNote = "aa", magazine = "ab";
    canConstruct(ransomNote,magazine);
}