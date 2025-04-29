#include<iostream>
using namespace std;
int main(){
    int n;
    cin>> n;
    int i = 1;
    while(i<=n){
        // print space
        int space = 1;             // very important question of pattern printing 
        while(space<=n-i){
            cout<<" ";
            space = space+1;
        }
        // print number 
        int j = 1;
        while(j<=i){
            cout<<i;
            j = j + 1;
        }
        cout<< endl;
        i= i + 1;
    }
}    