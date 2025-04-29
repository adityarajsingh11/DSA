#include<iostream>
using namespace std;
int totalways(int n){
    //base case
    if(n<=1){
        return 1;
    }
    return totalways(n-1) + totalways(n-2); 
}
int main(){
    int n=4;
    totalways(n);
    cout <<"totalways:"<<totalways(n)<<endl;
}