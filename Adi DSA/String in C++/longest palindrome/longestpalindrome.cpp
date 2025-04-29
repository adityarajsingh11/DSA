#include<iostream>

#include<vector>
using namespace std;
int main(){
    string s = "abccccdd";
    vector<int>lower(26,0);
    vector<int>upper(26,0);

     //frequency updated
     for(int i=0;i<s.size();i++){
        if(s[i]>= 'a')
        lower[s[i]-'a']++;
        else
        upper[s[i]-'A']++;
     }

     // count for the lower and upper case
     int count =0;
     bool odd =0;
     for(int i=0;i<26;i++){
        //lower case
        if(lower[i]%2==0)
        count = count +lower[i];
        else{
            count = count + lower[i]-1;
            odd=1;
        }
        //uppercase
        if(upper[i]%2==0)
        count = count +upper[i];
        else{
            count = count + upper[i]-1;
            odd = 1;
        }
     }
     count = count +odd;
     cout<< count;
    
}