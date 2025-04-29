#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<string> q;
    q.push("Aditya");
    q.push("Raj");
    q.push("Singh");

    //want to print top element 
    cout << "first element :" <<q.front() << endl;
    cout << "before pop size :" << q.size() << endl; 

    //want to remove first element of queue
    q.pop();
    cout << "first element :" << q.front()<< endl;
    cout << "size after of pop :"<< q.size()<< endl;

    // all case ki complexity is O(1) hogi

}

