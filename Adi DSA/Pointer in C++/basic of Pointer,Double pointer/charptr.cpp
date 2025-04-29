#include<iostream>
using namespace std;
int main(){
    // char arr[5] = {'a','b','c','d','e'};
    // char *ptr=arr;
    // cout<<(void*)arr<<endl;  // this is typecasting in pointer
    // cout<<(void*)ptr<<endl;

    char name = 'a';
    char * ptr = &name;
    //cout<<ptr<< endl;
    cout<< (void*)ptr<<endl; // typecasting kiya h
    

}