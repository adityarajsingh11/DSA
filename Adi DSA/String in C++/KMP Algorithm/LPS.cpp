// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){
//     string s="ABCABDABCABDABDAB";
//     vector<int>lps(s.size(),0);
//     int prefix=0,suffix=1;
//     while(suffix<s.size()){
//         if(s[prefix]==s[suffix]){
//             //lps[suffix]=prefix=1;
//             //prefix++,suffix++;
//             prefix++;
//             s[suffix]=prefix;
//             suffix++;
//         }
//         else{
//             if(prefix==0){
//                 lps[suffix]=0;
//                 suffix++;
//             }
//             else{
//                 prefix=lps[prefix-1];
//             }
//         }

//     }
//     cout<<lps[s.size()-1];
//     return 0;
// }
    

#include<iostream>
#include<vector>

using namespace std;
int main(){
    string s="ABCDEABCD";
    vector<int>lps(s.size(),0);
    int prefix=0,suffix=1;
    while(suffix < s.size()){
        if(s[prefix]==s[suffix]){
            lps[suffix]=prefix+1;
            prefix++,suffix++;
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
    
    cout<<lps[s.size()-1];
}
    

    
    
