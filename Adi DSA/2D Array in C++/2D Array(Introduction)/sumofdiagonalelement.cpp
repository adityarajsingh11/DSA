#include<iostream>
using namespace std;
int main(){
    int arr[4][4] = {5,8,3,9,6,2,8,4,5,3,2,2,2,8,1,9};
    // for first diagonal element 
    int first = 0;
    for(int i = 0;i<4;i++){  // this can also solve by while loop like second case
        first +=arr [i][i];
    }

    // for second diagonal element 
    int second = 0;
    int i = 0,j = 4-1;  //col-1
    while(j>=0){
        second += arr[i][j];
        i++,j--;
    }
    cout << "sum of first diagonal element :"<<first << endl;
    cout << "sum of second diagonal element  :"<< second ;
}