#include<iostream>
using namespace std;

void fun3(int n){
    cout <<n << " days left for birthday"<<endl;
}
void fun2(int n){
    cout <<n << " days left for birthday"<<endl;
}
void fun1(int n){
    cout <<n << " days left for birthday"<<endl;
}
void fun0(int n){
    cout << "happy birthday"<<endl;
}

int main(){
    int n=5;

    //iterative approach
    // for(int i=5;i>0;i--){
    //     cout<<i <<"days left for birthday"<<endl;
    // }
    // cout <<"happy bithday"<<endl;

    // by using function
    fun3(3);
    fun2(2);
    fun1(1);
    fun0(0);
}