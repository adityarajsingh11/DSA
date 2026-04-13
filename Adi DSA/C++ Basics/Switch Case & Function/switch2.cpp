#include<iostream>
using namespace std;
int main(){
    char ch = '1';
   //char ch = 'A'
    cout << endl;
    switch(ch) {
        case 1 : cout << " this is first"<< endl;
                break;
        case '1' : cout << "this is second " << endl;
                   cout << "this is string" << endl;  // multiple statement can be used
             break;
        default : cout << "this is default case" << endl;


    }
    cout << endl; 

    return 0;
}