#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i = 1;  // start from 1 to n
    while(i<=n){
        int j = 1;   //start from 1 to n
        while(j<=n){
            cout<<n-j+1;  //formula for reverse printing of pattern
            j=j+1;
        }
        cout<<endl;
        i = i + 1;
    }
}