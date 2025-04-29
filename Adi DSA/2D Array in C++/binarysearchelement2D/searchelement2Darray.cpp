#include<iostream>
using namespace std;
// int search2D(int matrix[][5],int n,int m,int target){
//     int start=0,end=n*m-1;
     
//     while(start<=end){
//         int mid = (start+end)/2;
//         int row_index = mid/m;
//         int col_index = mid%m;
//         if(matrix[row_index][col_index] == target){
//             cout<<"present";
//             return 1;
//         }
//         else if(matrix[row_index][col_index]<target){
//             start=mid+1;
//         }
//         else{
//             end= mid-1;
//         }
        
//     }
//     cout<<"absent";
//     return 0;


// }
int main(){
    // int n,m ;
    // cout << "Enter the size of matrix: ";
    // cin>>n>>m;
    // int matrix[n][m];
    // for(int i =0;i<n;i++)
    // for(int j=0 ;j<n;j++)
    // cin>>matrix[i][j];
    // cout << endl;
    int n=4,m=5,target = 50;
    
    int matrix[n][m]={
        {2, 6, 10, 14 ,18},
        { 20, 26, 28, 30, 33},
         {35, 38, 40, 52, 68},
        { 70 ,80, 86 ,101 ,106}
        };
     

    //binary search in matrix
    int start=0,end=n*m-1;

    while(start<=end){
        int mid = (start+end)/2;
        int row_index = mid/m;
        int col_index = mid%m;
        if(matrix[row_index][col_index]==target){
        cout<<"present";
        return 1;
        }
        else if(matrix[row_index][col_index]<target){
        start=mid+1;
        }
        else{
        end= mid-1;
        }
    }
     cout<<"absent";
    return 0;
    



}