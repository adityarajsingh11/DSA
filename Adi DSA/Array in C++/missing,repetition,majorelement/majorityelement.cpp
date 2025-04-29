#include<iostream>
using namespace std;
int main(){
    int n=11;
    int arr[n]={3,3,2,3,1,3,2,2,1,3,3};
    int candidate,count = 0;
    for(int i=0;i<n;i++){
        if(count ==0){
            count =1;
            candidate = arr[i];
        }
        else{
            if(candidate == arr[i])
            count++;
            else
            count --;
            
        }
        
    }
    cout<< "majority element:"<< candidate ;

    // verification of majority element 
    for(int i=0;i<n;i++){
        if (arr[i]==candidate)
        count ++;
    }
    if(count >n/2)
    cout<< candidate;
    else
    cout<<-1;
}