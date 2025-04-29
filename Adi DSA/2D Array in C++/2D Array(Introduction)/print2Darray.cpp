#include<iostream>
using namespace std;
void printcol(int arr[][3],int row,int col){
    for(int j= 0;j<col;j++)
    for(int i = 0;i<row;i++)
    cout << arr[i][j]<<" ";
}

int main(){
    int arr[4][3] = {1,2,3,4,5,6,7,8,9,10,11,12};

    // print 2D array rowwise
    for(int row = 0;row<4;row++)
    for(int col=0;col<3;col++)
    cout << arr[row][col]<< " ";
cout << endl;

// print 2D array column wise
printcol(arr,4,3);//function call kiya h
}