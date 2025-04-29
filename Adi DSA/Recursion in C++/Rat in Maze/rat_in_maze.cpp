#include<iostream>
#include<vector>
using namespace std;
bool valid(int i ,int j,int n){
    return i>=0 && j>=0 && i<n && j < n;
}
void total(vector<vector<int>>&matrix,int i,int j,int n,string&path,vector<string>&ans,vector<vector<bool>>&visited){
    //base case
    if(i==n-1 && j ==n-1){
        ans.push_back(path);
        return;
    }
    visited[i][j]=1; // mark as visited

    int row[]={-1,1,0,0};
    int col[]={0,0,-1,1};
    string dir="UDLR";

    for(int k=0;k<4;k++){
        if(valid(i+row[k],j+col[k],n) && matrix[i+row[k]][j+col[k]]  && !visited[i+row[k]][j+col[k]]){
            path.push_back(dir[k]);
            total(matrix,i+row[k],j+col[k],n,path,ans,visited);
            path.pop_back();
        }
    }
    visited[i][j]=0;  // backtrack mtlb furthur visit  in future k liye
}




int main(){
    
    int n = 4;
    vector<vector<int>> m = {
        {1, 1, 0, 0},
        {1, 1, 0, 1},
        {1, 1, 0, 0},
        {0, 1, 1, 1}
    };
    vector<vector<bool>> visited(n, vector<bool>(n, 0)); 
    vector<string> ans;
    string path;
    
    // Check if starting or ending point is blocked
    if (m[0][0] == 0 || m[n-1][n-1] == 0) {
        cout << "No path available" << endl;
        return 0;
    }
    
    total(m, 0, 0, n, path, ans, visited);                      

    // Output the paths
    if (ans.size() == 0) { // Check if ans has no elements
        cout << "No path found" << endl;
    } else {
        cout << "Paths found:" << endl;
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << endl;
        }
    }

    return 0;
}
                 

    
