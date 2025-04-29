#include<iostream>
using namespace std;
int main(){
    string s ;
    cin>>s;
    int start=0;
    int end = s.size();
    while(start<end){
        swap(s[start],s[end]);
        start++,end--;
    }
    cout << "reverse of string:"<<s<<endl;

    
}