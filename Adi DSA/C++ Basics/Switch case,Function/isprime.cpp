#include<iostream>
using namespace std;

// 1 -> prime
// 0 -> not prime number
int isprime(int n){
    for(int i = 2; i < n; i++){
        if (n%i==0){
            return 0;
        }
        else{
            return 1;
        }
    }

}
int main(){
    int n ; 
    cin >> n;
    if(isprime(n)){
        cout << "prime"<< endl;
    }
    else{
        cout<<"not prime"<< endl;
    }
}