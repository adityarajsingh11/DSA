#include<iostream>
using namespace std;
void uppercase(string &s,int index){
    //base case
    if(index == -1){
        return;
    }
    s[index] = 'A' +s[index]-'a';
    uppercase(s,index-1);
}
int main(){
    string s = "rohit";
    uppercase(s,4);
    cout << s<<endl;
}