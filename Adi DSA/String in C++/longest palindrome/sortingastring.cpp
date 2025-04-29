#include<iostream>
#include<vector>
using namespace std;
int main(){
    string s = "is2 sentence4 This1 a3";
    vector<string> ans(10);
    string temp;
    int count=0,index=0;
    while(index < s.size()){
        if(s[index]==' '){
            int pos = temp[temp.size()-1]-'0';
            temp.pop_back();
            ans[pos] = temp;
            temp.clear(),count++;
        }
        else
        temp = temp+s[index];
        index++;
    }

        // a3 ke baad koi space nhi hai isliye isko likhna pada
        int pos = temp[temp.size()-1]-'0';
        temp.pop_back();
        ans[pos] = temp;
        temp.clear(),count++;

    for(int i=0;i<=count;i++){
        temp = temp+ans[i];
        temp=temp+' ';
    }
    temp.pop_back();
    cout << temp;

}