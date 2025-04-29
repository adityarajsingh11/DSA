#include<iostream>
using namespace std;
bool binarysearch(int arr[],int start,int end,int target){
    //base case
    if(start>end){
        return 0;
    }
    int mid = start + (end-start)/2;
if(arr[mid] ==target)
return 1;
else if(arr[mid]<target)
return binarysearch(arr,mid+1,end,target);
else return binarysearch(arr ,start,mid-1,target);
}


int main(){
    int arr[] = {3,8,11,15,20,22};
    int target = 15;
    binarysearch(arr,0,6,15);
    cout << binarysearch(arr,0,6,15);
}