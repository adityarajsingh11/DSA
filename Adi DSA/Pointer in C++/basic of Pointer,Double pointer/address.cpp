#include<iostream>
using namespace std;
int main(){
    int a=10;
    //print address of a
    cout << &a << endl;;
    // store the address of a
    int * ptr=&a;
    cout<<ptr<<endl;
}