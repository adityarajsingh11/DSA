#include<iostream>
using namespace std;
int main(){
    int a = 3;
    cout << a <<endl;
    if(true){
        int a = 5;
        cout << a << endl;
        int b =2;
        cout << b << endl;
       // int b =5; this cannot be used again in same block used if condition to print same variable
        cout << b <<endl;
    }
    
}