#include<iostream>
#include<vector>
using namespace std;
// function of lps algorithm
void lpsfind(vector<int> &lps ,string s){ // pass by reference
    int prefix=0,suffix=1;
    while(suffix<s.size()){
        if(s[prefix]==s[suffix]){
            lps[suffix]=prefix+1;
            prefix++,suffix++;
           // prefix++;
            //s[suffix]=prefix;
            //suffix++;
        }
        else{
            if(prefix==0){
                lps[suffix]=0;
                suffix++;
            }
            else{
                prefix=lps[prefix-1];
            }
        }

    }
    

}

int main(){
    
    string haystack = "onionionson";
    string needle="onions";
    vector<int> lps(needle.size(),0);
    lpsfind(lps,needle);  // function call
    int first=0,second=0;
    while(second<needle.size() && first<haystack.size()){
        if(needle[second]==haystack[first]){
            second++,first++;
        }
        else{
            if(second==0){
                first++;
            }
            else{
                second=lps[second-1];
            }
        }
    }
    if(second == needle.size());
    cout<<"first occurence of needle:"<< first-second;
    return -1;
}