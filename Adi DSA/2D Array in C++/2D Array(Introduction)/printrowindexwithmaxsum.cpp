#include<iostream>
using namespace std;
int main(){
    int arr[5][4] = {3,4,7,18,2,8,3,9,5,4,2,2,7,3,0,8,2,8,9,1};
    int sum = INT16_MIN,index = -1;  //initial m sum minimum rahega
    for(int i =0;i<5;i++){
        int total = 0;
        for(int j = 0;j<4;j++)
        total += arr[i][j];
        if(sum<total){
            sum=total;
            index = i;
        }
    }
    cout << "index of row with maximum sum:"<<index;
    
}
// this question also solve by function call also