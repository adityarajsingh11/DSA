#include<iostream>
#include<algorithm>
using namespace std;
//void clockwwiserotate(int matrix[n][n]){
//     for(int i =0;i<n-1;i++){
//         for(int j=0;j<n;j++){
//         swap(matrix[i][j],matrix[j][i]);
//     }
//     }
//     for(int i =0;i<n;i++){
//         int start =0,end=n-1;
//         while(start<end){
//             swap(matrix[i][start],matrix[i][end]);
//             start++,end--;
//         }
//     }
// }
// note why this is not solved by function call
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
    // reverse the row
    for(int i =0;i<n;i++){
        int start =0,end=n-1;
        while(start<end){
            swap(matrix[i][start],matrix[i][end]);
            start++,end--;
        }
    }

    // print the matrix

   for(int i =0;i<n;i++)
   for(int j=0 ;j<n;j++)
    //cout << clockwwiserotate(matrix,n,n)<<" ";
    cout<<matrix[i][j]<<" ";
}