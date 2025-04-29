#include<iostream>
using namespace std ;


// 1 -> even
// 0 -> odd
bool isEven(int n ){     // function used here
    
    if(n % 2 == 0) {
        return 1;


    }
    else {
        return 0;
    }
}
int main(){
    int num ;
    cin >> num;
    if(isEven(num)){
        cout << "even"<< endl;

    }
    else {
        cout << "odd"<< endl;
    }
}