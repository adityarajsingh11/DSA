#include<iostream> 
#include<stack>

using namespace std;
int main(){
    stack<string> s;
    s.push("Aditya");
    s.push("Raj");
    s.push("Singh");
     
     // want to print top element 
     cout << "print top element :"<< s.top() << endl;

     //want to remove top elment 
     s.pop();
     cout << " top element :"<< s.top() << endl;
     cout << "size of stack :" << s.size()<< endl;
     cout << "empty or not :" << s.empty()<< endl;

}