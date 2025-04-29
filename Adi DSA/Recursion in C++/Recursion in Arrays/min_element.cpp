#include<iostream>
using namespace std;
int minelement(int arr[],int index,int n){
    // base case 
    if(index==n-1){
        return arr[index];
    }
    return min(arr[index],minelement(arr,index+1,n));
}
int main(){
    int arr[] = {7,2,4,1,6};
    minelement(arr,0,5);

    cout <<"minimum element of array:"<<minelement(arr,0,5);
}