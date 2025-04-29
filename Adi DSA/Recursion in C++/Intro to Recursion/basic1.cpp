#include<iostream>
using namespace std;



void fun0(int n){
    cout << "happy birthday"<<endl;
}

void fun1(int n){
    cout <<n << " days left for birthday"<<endl;
    fun0(n-1);
}

void fun2(int n){
    cout <<n << " days left for birthday"<<endl;
    fun1(n-1);
}

void fun3(int n){
    cout <<n << " days left for birthday"<<endl;
    fun2(n-1);
}



int main(){
    fun3(3);
}