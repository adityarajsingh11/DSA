#include<iostream>
using namespace std;
void update(int arr[],int n){

    cout << "Inside the function" << endl;

    // updating the array 
    arr[0] = 120;          // here we can update the array

    //printing the array
    for(int i = 0; i<3;i++){
        cout << arr[i]<< " ";
    }
    cout << endl;
    cout << "Going back to main function ";
}
int main(){

    int arr[3] = {1,2,3};
    update(arr,3);   // function call             // yaha jaise maine update m update kiya waise main function m bhi update ho gya not like dummy case
    //printing  the array                      // remember that in array agar m function ko update krte h tho main function bhi update ho jayeggi
    for(int i = 0;i < 3;i++){
        cout << arr[i]<<" ";
    }
    cout << endl;

}