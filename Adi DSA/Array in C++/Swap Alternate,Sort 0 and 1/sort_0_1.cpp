#include<iostream>
using namespace std;  

void printarray(int arr[],int n){
    for(int i = 0;i<n;i++){
        cout << arr[i]<<" ";
    }
    cout << endl;
}
void sortone(int arr[], int n){
    int left = 0,right = n-1;
    while(left < right){
        while(arr[left] == 0 && left < right){
            left++;
        }
        while(arr[right] == 1 && left < right){
            right--;
        }

        // agar yaha pahuch gya iska matlab
        //arr[left] == 0 and arr[right]== 1
        if(left < right ){
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
    }
}
int main(){
    int arr[8] ={ 1,1,0,1,1,0,0,1};

    sortone(arr,8);
    printarray(arr,8);

}