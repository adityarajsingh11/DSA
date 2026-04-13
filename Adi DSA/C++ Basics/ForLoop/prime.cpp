#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number" << endl;
    cin>> n;
    for(int i = 2; i<n; i++){
        if(n%i==0){
            cout<< " not prime"<< endl;
            break; // agar shuruaat m divide ho jta h tho check nhi karenge
        }
        else{
            cout << "  prime"<< endl;
        }
    }
}