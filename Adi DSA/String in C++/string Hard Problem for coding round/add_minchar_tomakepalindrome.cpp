#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    string s="aaaotcaakr";
    string rev = s; //string reverse
    reverse(rev.begin(),rev.end());
    int size = s.size();
    s+='$';
    s+=rev;

    //longest prefix nikalna h 
    int n=s.size();   //new size after adding character

    // code for checking matching 
    vector<int> lps(n,0);
    int prefix=0,suffix=1;
    while(suffix < s.size()){
        //matched
        if(s[prefix]==s[suffix]){
            lps[suffix]=prefix+1;
            prefix++,suffix++;
        }
        else{             // not matched
            if(prefix==0){
            lps[suffix]=0;
            suffix++;
            }
            else
            prefix=lps[prefix-1];
        }
    }
    // Answer dena h
    cout<< "number of character needed:"<<size-lps[n-1];



}