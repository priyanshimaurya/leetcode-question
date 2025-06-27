#include<iostream>
using namespace std;
bool containsDuplicate(int arr[],int size){
    bool found=false;
    for(int i=0;i<size;i++){    
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
               
                return true;
            }
        }
    }
    if(!found){
        return false;
    }
}
int main(){
    int arr[]={1,2,3,1},size=sizeof(arr)/sizeof(arr[0]);
    containsDuplicate(arr,size);
}