#include<iostream>
using namespace std;

void segre(int arr[],int n){
int s = 0;
int e = n-1;

while(s<e){
    if(arr[s]==0){
        s++;
    }
    else{
        if(arr[e]==0){
            swap(arr[s],arr[e]);
        }
        else{
            e--;
        }
    }
}
}
void printarray(int arr[],int n){
    for(int i = 0;i<n ;i++){
        cout << arr[i] <<" ";
    }
}
int main(){
    int arr[6] = {0,1,1,0,1,0};


    segre(arr,6);
    printarray(arr,6);
}