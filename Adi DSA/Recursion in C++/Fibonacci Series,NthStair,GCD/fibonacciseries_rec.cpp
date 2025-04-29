#include<iostream>
using namespace std;
int fib(int n){
    //base case
    if(n<=1){
        return n;
    }
    return fib(n-1)+fib(n-2);
}
int main(){
    int n=13;
    fib(n);
    cout <<"fibonacci number at position"<<n<<":"<<fib(n)<<endl;
}