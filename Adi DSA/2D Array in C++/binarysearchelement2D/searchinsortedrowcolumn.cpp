#include<iostream>
using namespace std;
int main(){
    int n=5,m=5;
   // int matrix[n][m] = {4,8,15,25,60,20,22,26,42,80,30,40,45,68,104,40,50,72,83,130,60,99,114,128,170};
   int matrix[n][m] = {
        {4, 8, 15, 25, 60},
        {20, 22, 26, 42, 80},
        {30, 40, 45, 68, 104},
        {40, 50, 72, 83, 130},
        {60, 99, 114, 128, 170}
        };
    int i=0,j=m-1;
    int target = 50;
    while(i<n && j>=0){
        if(matrix[i][j]==target){
            cout<<"present"<<"("<<i<<","<<j<<")";
            return 1;
        }
        else if(matrix[i][j]<target){
            i++;
        }
        else{
            j--;
        }
    }
    cout<<"absent";
    return 0;
    
}