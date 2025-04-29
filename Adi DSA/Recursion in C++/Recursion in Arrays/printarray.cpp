#include<iostream>
using namespace std;

void print(int arr[],int index,int n){

    //base case
    if(index==5){
        return;
    }
    cout<<arr[index]<<" ";
    print(arr,index+1,n);
}

int main(){
    int arr[5] = {3,7,6,2,8};   // solving index from 0;
    print(arr,0,5);


}