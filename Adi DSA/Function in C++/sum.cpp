#include<iostream>
using namespace std;
int sum(int a,int b){ // function declare
    int ans = a+b;  // function definition
    return ans;
}
int main(){
    int m , n;
    cin>> m>>n;
    cout << "sum of two number:"<< sum(m,n)<< endl; // function call
    
}