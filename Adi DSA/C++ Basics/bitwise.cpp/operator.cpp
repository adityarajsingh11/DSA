#include<iostream>
using namespace std ;
int main(){
    int a = 4;
    int b = 5;
    cout<<"a&b:"<< (a&b)<< endl;
    cout<<"a|b:"<<(a|b)<< endl;
    cout<<"~a:"<<~a << endl;
    cout<<"a^b:"<<(a^b )<< endl;
    cout<< (17>>1) << endl; // divide by 2

    cout << (17 >>2) <<endl ; // divide by 4
    cout << (19<<1)<<endl;  // multiply by 2
    cout << (21 << 2) << endl; // multiply by 4

    int i = 7;
    cout << (i++)<<endl;  // interview qns
    cout <<(++i)<<endl;
    cout <<(i--)<<endl;
    cout <<(--i)<<endl;


}