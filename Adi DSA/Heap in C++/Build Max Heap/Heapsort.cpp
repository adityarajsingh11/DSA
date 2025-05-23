#include<iostream>
using namespace std;

// Array convert into Maxheap
// MaxHeap to sorted array

void Heapify(int arr[],int index,int n){
    int largest = index;
    int left = 2*index+1;
    int right = 2*index+2;

    if(left <n && arr[left] > arr[largest])
    largest = left;
    if(right < n && arr[right] > arr[largest])
    largest = right;

    if(largest != index){
        swap(arr[largest],arr[index]);
        Heapify(arr,largest,n);
    }
}

void BuildMaxHeap(int arr[],int n){
    // step down 
    for(int i = n/2-1;i>=0;i--){
        Heapify(arr,i,n);
    }
}

void printHeap(int arr[],int n){
    //cout <<"Max heap created"<<endl;
    for(int i =0;i<n;i++){
        
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sortArray(int arr[],int n){
    cout <<"After sorting the Maxheap"<<endl;
    for(int i = n-1;i>=0;i--){
        swap(arr[i],arr[0]);
        Heapify(arr, 0,i); // last wale ko nhi bheja heapify function ke andar 
                                    // becoz wo sabse bada h 
    }
}

int main(){
    int arr[] = {10,3,8,9,5,13,18,14,11,70};
    BuildMaxHeap(arr,10);
    printHeap(arr,10 );
    sortArray(arr,10);
    printHeap(arr,10);
}

