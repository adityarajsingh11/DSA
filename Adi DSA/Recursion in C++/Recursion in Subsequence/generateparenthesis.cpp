#include<iostream>
#include<vector>
using namespace std;
void parenthesis(int n ,int left,int right,vector<string>&ans,string temp){
    // base case
    if(left +right == 2*n ){
         ans.push_back(temp);  // add the valid combination to result
        return ;
    }
    // left parenthesis
    if(left<n){
        temp.push_back('(');
        parenthesis(n,left+1,right,ans,temp);
        temp.pop_back();
    }
    // right parenthesis
    if(right<left){
        temp.push_back(')');
        parenthesis(n,left,right+1,ans,temp);
        temp.pop_back();
    }

}
int main(){
    int n =3;
    vector<string>ans;
    string temp;
    parenthesis(n,0,0,ans,temp);
    for(int i =0;i<3;i++)
    cout << ans[i]<<endl;
}


// #include <iostream>
// #include <vector>
// using namespace std;

// void parenthesis(int n, int left, int right, vector<string>& ans, string temp) {
//     // base case: if the current string has 2*n characters
//     if (left + right == 2 * n) {
//         ans.push_back(temp);  // add the valid combination to result
//         return;
//     }

//     // add left parenthesis if we haven't used all 'n' left parentheses
//     if (left < n) {
//         parenthesis(n, left + 1, right, ans, temp + '(');
//     }

//     // add right parenthesis if there are more left parentheses than right
//     if (right < left) {
//         parenthesis(n, left, right + 1, ans, temp + ')');
//     }
// }

// int main() {
//     int n = 3;
//     vector<string> ans;
//     string temp;
//     parenthesis(n, 0, 0, ans, temp);

//     // print all combinations
//     for (const string& s : ans) {
//         cout << s << endl;
//     }

//     return 0;
// }
