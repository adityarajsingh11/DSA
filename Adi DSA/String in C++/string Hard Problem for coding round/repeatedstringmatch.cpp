#include<iostream>
#include<vector>
using namespace std;
// kmp for matching second in first present or not
void lpsfind(vector<int> lps,string s){

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
}
    
    int kmpmatch( string haystack,  string needle) {
    vector<int> lps(needle.size(), 0);
    lpsfind(lps, needle); // build LPS array for needle

    int first = 0, second = 0;
    while (first < haystack.size()) {
        if (needle[second] == haystack[first]) {
            second++, first++;
        }
        if (second == needle.size()) {
            // If we have matched the entire needle
            return 1; // Needle found
        }
        if (first < haystack.size() && needle[second] != haystack[first]) {
            if (second == 0) {
                first++;
            } else {
                second = lps[second - 1];
            }
        }
    }
    return 0; // Needle not found
}

int main() {
    string first = "abcd";
    string second = "cdabcdab";
    if (first == second) {
        cout << 1 << endl; // If both strings are already equal
        return 0;
    }

    int repeat = 1;
    string temp = first;
    while (temp.size() < second.size()) {
        temp += first;
        repeat++;
    
    if (kmpmatch(temp, second) == 1) {
        cout << repeat << endl;
        return 0;
    }
    }
    

    // Check one last time with one more repetition
    if (kmpmatch(temp + first, second) == 1) {
        cout << repeat + 1 << endl;
        return 0;
    }

    cout << -1 << endl; // If no such number of repetitions can make second a substring
    return 0;
    
}

    



