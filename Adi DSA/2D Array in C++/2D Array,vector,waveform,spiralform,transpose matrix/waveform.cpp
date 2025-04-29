#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int arr[4][4] = {3,6,4,2,7,8,11,5,9,3,2,1,17,8,5,9};
    
    // print 2D array in the form of wave form
    for(int j =0;j<4;j++){
        if(j%2==0){
            for(int i = 0;i<4;i++)
            cout << arr[i][j]<<" ";
        }
        else{
            for(int i =4-1;i>=0;i--){
                cout << arr[i][j]<<" ";
            }
        }
    }
}
// this is also solve by function call