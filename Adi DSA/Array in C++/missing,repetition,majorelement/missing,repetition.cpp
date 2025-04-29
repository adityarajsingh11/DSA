#include<iostream>
using namespace std;
int main(){
    int n =7;
    int arr[n] = {4,3,2,1,2,7,6};
    //decrement by 1
    for(int i =0;i<n;i++)
    arr[i]--;

    // addition n to the arr
    for(int i=0;i<n;i++){
        arr[arr[i]%n] +=n;

    }
    //missing element 
    for(int i=0;i<n;i++){
        if(arr[i]/n==0){
            cout << i+1;
            break;

        }
    }
    cout << endl;
    // repetition of element 
    for(int i=0;i<n;i++){
        if(arr[i]/n==2){
            cout<<i+1;
            break;
        }
    }
    
}