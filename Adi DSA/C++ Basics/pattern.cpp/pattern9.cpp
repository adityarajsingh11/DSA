#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i = 1;  // start from 1 to n
    
    while(i<=n){
        int j = 1;  
        int value = i;  // becoz every row start from its row number then put under row section
        while(j<=i){
            cout<<value<<" ";
            value = value +1;
            j=j+1;
        }
        cout<<endl;
        i = i + 1;
    }
}