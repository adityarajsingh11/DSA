#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i = 1;  // start from 1 to n
    while(i<=n){
        int j = 1;   //start from 1 to n
        while(j<=n){
            j=j+1;
            cout<<i;
        }
        cout<<endl;
        i = i + 1;
    }



}