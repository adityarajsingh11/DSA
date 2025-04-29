#include<iostream>
using namespace std;
int main(){
    string s ;
    //getline is used to avoid space and tab
    getline(cin,s);
    cout << "string :"<< s<< endl;
    cout << "size of string:"<< s.size()<< endl;
}