#include<iostream>
using namespace std;
int fact(int n){
    //base case
    if(n==1 || n==0){
        return 1;
    }
    return n * fact(n-1);

}
int main(){
    int n=5;
    fact(n);
    cout <<"factorial of number"<< fact(n)<<endl;
}