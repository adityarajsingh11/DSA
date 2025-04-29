#include<iostream>
using namespace std;

void fun(int n){
    //base case
    if(n==2){
        cout << 2<<endl;
        return;
    }
    cout << n<<endl;
    fun(n-2);
}

int main(){
    int n=10;
    // even number
    fun(10);
}