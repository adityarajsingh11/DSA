#include<iostream>
#include<vector>
using namespace std;
void find(int n,vector<string>&ans,string &temp,int zero,int one){
    // base case
    if(temp.size()==n){
        ans.push_back(temp);
        return;
    }
    if(zero<one){
        temp.push_back('0');
        find(n,ans,temp,zero+1,one);
        temp.pop_back();
    }
    temp.push_back('1');
    find(n,ans,temp,zero,one+1);
    temp.pop_back();

}
int main(){
    int n=4;
    vector<string>ans;
    string temp;
    find(n,ans,temp,0,0);
    for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << endl;
        }
}