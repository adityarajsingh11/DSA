#include<iostream>
using namespace std;
int main(){
    int num = 2;
    cout << endl;
    switch(num) {
        case 1 : cout << " this is first"<< endl;
                break;
        case 2 : cout << "this is second " << endl;
             break;
        default : cout << "this is default case" << endl;


    }
    cout << endl; 

    return 0;
}