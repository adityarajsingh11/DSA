#include<iostream>
using namespace std;
int sum(int n){

    //base case
    if(n==1){
        return 1;   // return statement becoz value aage used krni h same as below return case
    }
    return n + sum(n-1);
}
int main(){
    int n = 6;
    sum(n);
    cout <<"sum of first n natural number:"<<sum(n)<<endl;
}