#include<iostream>
using namespace std;
bool find(int arr[],int index,int n ,int target){
    //base case
    if(target==0)
    return 1;
    if(index==n || target<0)
    return 0;
     
     // first one is not included and second one is included
    return find(arr,index+1,n,target) || find(arr,index+1,n,target-arr[index]);
}
int main(){
    int arr[] = {3,6,4,5};
    int target = 116;
    find(arr,0,4,target);
    cout << find(arr,0,4,target);
}