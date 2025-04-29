#include<iostream>
using namespace std;
int getMin(int num[],int n){
    int min = INT16_MAX;
    for(int i =  0;i<n ;i++){
        if(num[i]<min){
            min=num[i];
        }
    }
     //RETURNING THE value of min
    return min;
}

int getMax(int num[],int n){
    int max = INT16_MIN;
    for(int i =  0;i<n ;i++){
        if(num[i] > max){
            max=num[i];
        }
    }
     //returning the value of max 
    return max;

}

int main(){
    int size;
    cin >> size;
    int num[100];
    //taking input in array
    for(int i = 0;i < size; i++){
        cin >> num[i];
    }
    cout << "the max value is " << getMax(num,size) << endl;

    cout << "the min value is " << getMin(num,size) << endl;

}