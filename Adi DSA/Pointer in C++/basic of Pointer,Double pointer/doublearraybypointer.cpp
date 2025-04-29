#include<iostream>
using namespace std;
void dob(int *ptr){ 
    for(int i =0;i<5;i++){
    ptr[i]=2*ptr[i];
    }
}

int main(){
    int arr[5] = {1,2,3,4,5};
    dob(arr);
    // double array
    for(int i=0;i<5;i++){
        cout<< arr[i] <<" ";
    }
}
