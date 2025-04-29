#include<iostream>
using namespace std;

// check prime
bool prime(int n){
    if(n<2){
        return 0;
    }
    for(int i =2; i<n;i++){
        if(n%i==0){
            return 0;
        }
        else{
            return 1;
        }
    }
}

// factorial of number
int factorial(int m){
    int ans = 1;
    for(int i=1;i<=m;i++){
        ans = ans * i;
    }
    return ans;
}

int main(){
    int a,b;
    cout<< "Enter the two number:"<<endl;
    cin>>a>>b;
    // function call
    cout<< " a is prime or not:"<< prime(a) << endl;
    cout<< " b is prime or not:"<< prime(b) << endl;
    cout<< "factorial of a:"<< factorial(a)<<endl;
    cout << "factorial of b:"<< factorial(b)<< endl;
}