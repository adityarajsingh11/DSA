#include<iostream>
using namespace std;
int main(){
    int n ;
    cin>>n;
    int i = 1;
    while(i<=n){
        int j = 1;
        char ch ='A' +i -1; //char will be used to convert int int char
       
        while(j<=n){
            cout<<ch<<" ";
            j= j+1;
         
        }
        cout<<endl;
        i= i+1;
    }
}

/*

A A A A A 
B B B B B 
C C C C C 
D D D D D 
E E E E E

*/