#include<iostream>
using namespace std;
int  partition(int arr[],int start,int end){
    int pos = start;
    for(int i = start;i<=end;i++){
        if(arr[i]<=arr[end]){
        swap(arr[i],arr[pos]);
        pos++;
        }
    }
    return pos -1;

}
void quicksort(int arr[],int start,int end){
     //base case 
     if(start>=end)
     return;

     int pivot = partition(arr,start,end);
     // left part
     quicksort(arr,start,pivot-1);
     // right part 
     quicksort(arr,pivot+1,end);

}
int main(){
    int arr[]={6,2,5,1,4,2,3};
    quicksort(arr,0,6);
    for(int i =0;i<7;i++)
    cout << arr[i] <<" ";
}