#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;

 // function to check valid parenthesis or not 
 bool check(string str){
    stack<char>S;
    for(int i =0;i<str.size();i++){
        if(str[i] == '(')
        S.push(str[i]);
        else{
            if(S.empty())
            return 0;
            else
            S.pop();
        }


    }
    return S.empty();
 }
 int main(){
     string str = "(()())";
     cout <<check(str);
     return 0;
 }