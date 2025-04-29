#include<iostream>
#include<vector>
using namespace std;

//for merge function
void merge(int arr1[],int n,int arr2[],int m,int arr3[]){
    int i = 0,j = 0;
    int k = 0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            arr3[k++]=arr1[i++];
           // k++;
            //i++;
        }
        else{
        arr3[k++]=arr2[j++];
        //k++;
        //j++;
        }
    }
    // copy first array ko
    while(i<n){
        arr3[k++]=arr1[i++];
        //i++;
        //j++;
    }
    //copy second array ko
    while(j<m){
        arr3[k++]=arr2[j++];
        //j++;
        //k++;
    }

}
// for print function
void print(int ans[],int n){
    for(int i = 0;i<n;i++){
        cout << ans[i]<< " ";
    }
}
int main(){
    int arr1[4] = {1,3,4,5};
    int arr2[3] = {2,6,9};
    int arr3[7]= {0};
    merge(arr1,4,arr2,3,arr3);
    print(arr3,7);
}