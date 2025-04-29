#include<iostream>
using namespace std;
bool linearsearch(int arr[],int target,int index,int N){
    //base case 
    if(index==N){
        return 0;
    }
    if(arr[index] == target){
        return 1;
    }
    else{
        return linearsearch(arr,target,index+1,N);
    }
}
int main(){
    int arr[] = {2,4,7,3,11,8,12};
    int target = 8;
   cout<< linearsearch(arr,8,0,7);
}