#include<iostream>
using namespace std;
int main(){
    int n = 8;
    int arr[n] = {3,2,5,3,1,2,3,7};

    //decrement by 1
    for(int i =0;i<n;i++)
    arr[i]--;

    // addition n to the arr
    for(int i=0;i<n;i++){
        arr[arr[i]%n] +=n;

    }
    int count =0;
    for(int i=0;i<n;i++){
        count = arr[i]/n;
        //count = count +1;
        cout << count << endl;

    }

}