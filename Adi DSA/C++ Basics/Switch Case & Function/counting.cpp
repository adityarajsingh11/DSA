#include<iostream>
using namespace std;

void printCounting(int n){           // void used to not return statement only print
    for( int i = 1 ; i <= n ; i++){ 
        cout << i << endl;
    }
}
int main(){ 
    int n ; 
    cin >> n ; 
    printCounting(n);    // function call kiya h yaha par
    return 0;
}