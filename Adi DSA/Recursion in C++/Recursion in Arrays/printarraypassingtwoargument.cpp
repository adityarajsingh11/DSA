#include<iostream>
using namespace std;
void print(int arr[],int index){
    // base case
    if(index==-1){
        return;
    }
    cout <<arr[index]<<" ";
    print(arr,index-1);
}
int main(){
    int arr[] = {3,7,6,2,8};
    print(arr,4);
    
}