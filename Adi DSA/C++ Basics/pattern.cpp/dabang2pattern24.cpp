#include<iostream>
using namespace std;
int main(){
    int n;
    cin>> n;
    int i = 1;
    while(i<=n){
        // print triangle1 from n to n-i+1
        int j = 1;
        while(j<= n-i+1){
            cout<<j<<" ";
            j= j+1;

        }
        
        // print triangle2
         j = 1;
        while(j<=(i-1)*2){
            cout<<"* ";
            j = j + 1;
        }
        //print triangle3
         j =n-i+1;
        while(j>=1){
            cout<<j<<" ";
            j = j-1;
        }
        cout<< endl;
        i= i + 1;
    }
}    