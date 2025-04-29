#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i = 1;  // start from 1 to n
    int count =1;
    while(i<=n){
        int j = 1;   //start from 1 to n
        while(j<=n){
            cout<<count<<" ";  // simply count print karna h becoz value change nhi ho rhi h
            j=j+1;
            count = count + 1;
        }
        cout<<endl;
        i = i + 1;
    }
}