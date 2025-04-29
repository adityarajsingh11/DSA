#include<iostream>
using namespace std;
int main(){
    int n;
    cin>> n;
    int i = 2;
    
    while(i<n){
         // agar number kisi se divide ho gya tho tho prime nhi hoga
         if (n%i==0){
            cout<<"The number is not prime"<<   i  <<endl;  // i for value jispar not prime h
         }
         else{
            cout<<"The number is prime"<<i << endl;
         }
         i = i + 1;
    }
    
}