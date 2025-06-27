#include<iostream>
#include<math.h>
using namespace std;

bool isPerfectSquare(int num){
    if(num>=0){
        long sr=sqrt(num);
        return(sr*sr==num);
    }
    else{
        return false;
    }
};
int main(){
    int num=14;
    if(isPerfectSquare(num)){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}