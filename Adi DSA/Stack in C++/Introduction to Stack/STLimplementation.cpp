#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> S;
    S.push(4);
    S.push(3);
    S.push(40);
    S.push(30);
    S.push(20);
    S.push(10);
    cout<<"top element " <<S.top()<<endl;
    cout <<"check stack is empty or not "<<S.empty() << endl;
    cout <<"size of the stack "<<S.size()<<endl;
    S.pop();
     cout <<"size of the stack "<<S.size()<<endl; 

}