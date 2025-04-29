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

    // reverse columnwise first
    for(int j =0;j<n;j++){
        int start =0,end=n-1;
        while(start<end){
            swap(matrix[start][j],matrix[end][j]);
            start++,end--;
        }
    }

    // reverse rowwise second
    for(int i =0;i<n;i++){
        int start =0,end=n-1;
        while(start<end){
            swap(matrix[i][start],matrix[i][end]);
            start++,end--;
        }
    }

    //print matrix
    for(int i =0;i<n;i++)
   for(int j=0 ;j<n;j++)
    cout<<matrix[i][j]<<" ";



}