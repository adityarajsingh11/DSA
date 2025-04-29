#include<iostream>
using namespace std;
int sqsum(int n){

    //base case
    if(n==1){
        return 1;
    }
    return n*n + sqsum(n-1);
}
int main(){
    int n=4;
    sqsum(n);
    cout <<"sum of square of  n natural number:" <<sqsum(n)<<endl;
}