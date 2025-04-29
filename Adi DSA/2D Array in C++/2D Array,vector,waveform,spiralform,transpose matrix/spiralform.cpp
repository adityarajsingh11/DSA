#include<iostream>
using namespace std;
int main(){
    int matrix[4][4] ={3,6,4,2,7,8,11,5,9,3,2,1,17,8,5,9};
    int top = 0,right = 3,bottom=3,left=0;
    while(left<=right && top<=bottom){
        for(int j=left;j<=right;j++)
        cout<<matrix[top][j]<<" ";
        top++;
        
        for(int i =top;i<=bottom;i++)
        cout<<matrix[i][right]<<" ";
        right--;
        
        if(top<=bottom){
            for(int j =right;j>=left;j--)
            cout<<matrix[bottom][j]<<" ";
            bottom--;
            
        }
        
        if(left<=right){
            for(int i = bottom;i>=top;i--)
            cout<<matrix[i][left] <<" ";
            left++;
        }
        
        
    }

cout << endl;
}