#include<iostream>
using namespace std;
int power(int num,int n){

    // base case 
    if(n==1){
        return num;
    }
    // base case
    if(n==0){
        return 1;
    }
    return num*power(num,n-1);
}

int main(){
    int n =5;
    power(2,n);
    cout << "power of 2 :"<<power(2,n)<<endl;
}
