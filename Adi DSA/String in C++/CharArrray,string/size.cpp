#include<iostream>
using namespace std;
int main(){
    string s ;
    cin>>s;
    
    int size = 0;
    while(s[size] != '\0'){
        size++;
    }
    cout << "size of string not using inbuilt function:"<< size;
}