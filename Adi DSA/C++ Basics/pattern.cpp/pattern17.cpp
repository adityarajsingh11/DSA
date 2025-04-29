#include<iostream>
using namespace std;
int main(){
    int n;
    cin>> n;
    int i = 1;
    while(i<=n){
        int j=1;
        char ch = 'A' + n-i;//outside while rakha agar andr hota tho repeat karta
        while(j<=i){ 
            
            cout<<ch<<" ";
            ch = ch + 1;   // start char ke baad increment ho rha h by 1
             j = j + 1 ;
        }
        cout<<endl;
        i = i + 1;
    }
}