#include<iostream>
using namespace std;
int main(){
    string s,r;
    s = "aditya ";
    r = "raj singh";
    string s2 = s+r;
    string s3 = s.append(r);

    // another method of append
    cout << "append of string :"<< s3<<endl;

    cout << "append of string :"<< s2<<endl;
}