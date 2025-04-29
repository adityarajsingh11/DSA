#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    string s ="AABBBCBBAC";
    vector<int> count(256,0);
    int first=0,second =0,len=s.size(),diff=0;

    // calculate  all the unique character
    while(first < s.size()){
        if(count[s[first]]==0)  // first time dekha
            diff++;
            count[s[first]];
            first++;
        
    }
    for(int i=0;i<256;i++){
        count[i]=0;
    }
        first=0;

    
    while(second < s.size()){
        // diff exist karta h
        while(diff && second<s.size()){
            if(count[s[second]]==0)
            diff--;
            count[s[second]]++;
            second++;
        }
        len=min(len,second-first);

        // diff kin value 1 na banjaye
        while(diff!=1){
            len= min(len,second-first);
            count[s[first]]--;
            if(count[s[first]]==0){

            diff++;
            

            first++;
            }
            
        }
    }
    cout<< diff;
    cout << len;
}