#include<iostream>
using namespace std;
bool checkpal(string s,int start,int end){
    if(start>=end){
      return 1;
    }
    if(s[start] != s[end])
    return 0;
    else
    return checkpal(s,start+1,end-1);
}
int main(){
    string s = "naman";
    cout <<checkpal(s,0,4)<<endl;
}