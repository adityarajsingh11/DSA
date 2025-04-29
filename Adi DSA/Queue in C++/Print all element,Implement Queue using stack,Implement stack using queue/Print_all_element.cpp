#include<iostream>
#include<queue>
using namespace std;

int main(){
    
    queue<int> q;
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    q.push(80);

    int n = q.size();
    while(n--){
           
        cout << q.front() <<" ";
        q.push(q.front());
        q.pop();
    }
}