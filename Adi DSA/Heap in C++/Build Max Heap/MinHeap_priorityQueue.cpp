#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    priority_queue<int,vector<int>,greater<int> > p;
    p.push(10);
    p.push(20);
    p.push(5);
    p.push(39);
    p.push(60);

    cout << p.top()<<endl;

    p.pop();
    cout << p.top()<<endl;

    while(!p.empty()){
        cout <<p.top()<<" ";
        p.pop();
    }
}
