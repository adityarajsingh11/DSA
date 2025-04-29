#include<iostream>
using namespace std;
int main(){
    int num=10;
    int &temp = num;    // both are same
    cout<< temp<<endl;
    temp++;

    // printing address of num and temp
    cout<<num<<endl;
    cout<<&temp<<endl;
    cout << &num<<endl;

}