#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;

    // 2d array created 
    int **ptr= new int *[n];
    for(int i=0;i<n;i++)
    ptr[i]=new int[m];

    // value given to 2d array
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
    cin>>ptr[i][j];

    //print value of 2d array
    for(int i=0;i<n;i++){
    for(int j=0;j<m;j++)
    cout <<ptr[i][j]<<" ";
    cout<<endl;
    }
}