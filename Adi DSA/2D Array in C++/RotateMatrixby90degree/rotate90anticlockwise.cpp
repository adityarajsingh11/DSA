#include<iostream>
using namespace std;
int main(){
    int n ;
    cout << "Enter the size of matrix: ";
    cin>>n;
    int matrix[n][n];
    for(int i =0;i<n;i++)
    for(int j=0 ;j<n;j++)
    cin>>matrix[i][j];
    cout << endl;

    // transpose of matrix
    for(int i =0;i<n-1;i++){
        for(int j=0;j<n;j++){
        swap(matrix[i][j],matrix[j][i]);
        }
    }
    // reverse the column
    for(int j =0;j<n;j++){
        int start =0,end=n-1;
        while(start<end){
            swap(matrix[start][j],matrix[end][j]);
            start++,end--;
        }
    }

    // print the matrix

   for(int i =0;i<n;i++)
   for(int j=0 ;j<n;j++)
    //cout << clockwwiserotate(matrix,n,n)<<" ";
    cout<<matrix[i][j]<<" ";
}