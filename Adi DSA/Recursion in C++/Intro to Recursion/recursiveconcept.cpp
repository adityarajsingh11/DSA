#include<iostream>
using namespace std;

void fun(int n){
    // base case
    if(n==1){
    cout <<1 <<endl;
    return;
    }
    cout <<n<<endl;
    fun(n-1);
}

int main(){
    // ptint n to 1;
    int n=5;
    fun(5);
}