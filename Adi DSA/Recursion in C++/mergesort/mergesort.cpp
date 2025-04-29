#include<iostream>
#include<vector>
using namespace std;

void merge(int arr[],int start,int mid,int end){
    vector<int>temp(end-start+1);
    int left=start,right=mid+1,index=0;
    while(left<=mid && right<=end){
        if(arr[left] <=arr[right]){
            temp[index] = arr[left];
            index++,left++;
        }
        else{
            temp[index] = arr[right];
            index++,right++;
        }
    }

    // left array m agar element hai tho
    while(left<=mid){
        temp[index] = arr[left];
        index++,left++;
    }
    // right array m element hai tho
    while(right<=end){
        temp[index] = arr[right];
        index++,right++;
    }

    // put these value in array
    index = 0;
    while(start<=end){
        arr[start] = temp[index];
        start++,index++;
    }

}
void mergesort(int arr[],int start,int end){
    // base case or stoppage condition
    if(start == end)
    return;
    int mid = start + (end-start)/2;
    //left part
    mergesort(arr,start,mid);
    //right part
    mergesort(arr,mid+1,end);

    //merging the sorted part
    merge(arr,start,mid,end);

}


int main(){
    int arr[] = {6,3,1,2,8,9,7,10,3,10};
    mergesort(arr,0,9);
    for(int i =0;i<10;i++)
    cout << arr[i] <<" ";
}