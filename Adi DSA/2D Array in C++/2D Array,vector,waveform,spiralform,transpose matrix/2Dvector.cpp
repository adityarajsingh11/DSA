#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
    

int main(){
    // take input from user
    int n,m;
    cout <<"Enter the value of row and column: ";
    cin>>n>>m;
    vector<vector<int>> matrix(n,vector<int> (m,2));

    // create 2D vector
    //vector<vector<int>> matrix(4,vector<int> (3,2));
    // for(int i=0;i<4;i++)
    // for(int j=0;j<3;j++)
    // cout << matrix[i][j]<< " ";

    // find out number of row and column
    // cout << "Row number:"<<matrix.size();
    // cout << endl;
    // cout << "column number:"<< matrix[0].size();

    //printing value from user
    for(int i =0;i<n;i++)
    for(int j=0;j<m;j++)
    cin>> matrix[i][j];

    
    for(int i =0;i<n;i++){
    for(int j=0;j<m;j++)
    cout<<matrix[i][j]<<" ";
    cout << endl;
    }




}