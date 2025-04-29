#include<iostream>
using namespace std;

int winner(int n,int k){
    //base case
    if(n==1)
    return 0;
    return (winner(n-1,k)+k) % n;
}
int main(){
    int n=5;
    int k=3;
    winner(n,k);
    cout<<"winner :" <<winner(n,k)<<endl;
    
}