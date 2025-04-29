#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    string  s="ababc";
    vector<bool> count (256,0);
    // here first pointer on the string and second on count vector of length 256 
    int first =0,second =0,len=0;
    while(second < s.size()){
        while(count [s[second]]){
            count [s[first]]=0;
            first++;

        }
        count[s[second]]=1;
        len=max(len,second-first+1);
        second++;
    }
    cout << "length of string without repeating character:"<<len << endl;
}
