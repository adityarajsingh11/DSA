#include<iostream>
using namespace std;
int gcd(int a,int b){
    //base  case
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}
int main(){
    int a=18,b=48;
    cout <<"greatest common division of two number:"<<gcd(a,b)<<endl;
}