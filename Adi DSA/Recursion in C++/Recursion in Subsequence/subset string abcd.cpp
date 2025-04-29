#include<iostream>
#include<vector>
using namespace std;
void subset(string &s,int index,int n,vector<string> &ans, string &temp){

    // base case 
    if(index == n){
        ans.push_back(temp);
        return;
    }

    //no(not included)
    subset(s,index+1,n,ans,temp);
    
    // yes(included)
    temp.push_back(s[index]);
     subset(s,index+1,n,ans,temp);
     temp.pop_back();

}
int main(){
    string s = "abcd";
    vector<string> ans;
    string temp;
    subset(s,0,s.size(),ans , temp);
    for(int i =0;i<ans.size();i++)
    cout<<ans[i]<<" "<<endl;

}