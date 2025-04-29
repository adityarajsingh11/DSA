#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i = 1; // start from 1 to n
    int count = 1;   //yaha hum count ka used karenge and then increase by one
    while(i<=n){
        int j = 1;   //start from 1 to n
        while(j<=i){
            cout<<count<<" ";
            count = count + 1;
            j=j+1;
        }
        cout<<endl;
        i = i + 1;
    }
}